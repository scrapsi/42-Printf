/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:25:11 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/19 12:09:53 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// void	ft_parse(va_list, const char *args)
//{
//	int	i;
//	int	argument;
//
//	argument = ft_count_args(args);
//	while (i != argument)
//	{
//
//	}
//
//}
static int	ft_print_args(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (ft_strlen(str));
}

static int	ft_check_cspdiuxX(const char *args)
{
	int			i;
	int			j;
	const char	*cspdiuxX;

	i = 0;
	cspdiuxX = "cspdiuxX";
	while (args[i])
	{
		if (args[i] == '%')
		{
			i++;
			while (cspdiuxX[j])
			{
			}
		}
	}
}

static int	ft_check_format(const char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] && str[i + 1]) && (str[i] == '%' && str[i + 1] == '%'))
			i = i + 2;
		if (str[i] == '%')
			count++;
		i++;
	}
	printf("check : %d\n", count);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	if (ft_check_format(str) == 0)
		return (ft_print_args(str));
	//	else
	//		ft_parse(args, str);
	va_end(args);
	return (0);
}

int	main(void)
{
	printf("ft_printf : {%d}\n", ft_printf("NUL%%L\n"));
	return (0);
}