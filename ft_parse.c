/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:53:43 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:54:42 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list args, const char *str)
{
	int i;
	int len;
	char *current;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_check_format(str[i + 1]) == 1)
		{
			ft_conversion(args, str[i + 1]);
			i++;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	return (i);
}