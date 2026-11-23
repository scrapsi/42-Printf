/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:25:11 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:32:24 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	if (!ft_has_format(str))
		len = ft_putstr_len(str);
	else
		len = ft_parse(args, str);
	va_end(args);
	return (len);
}

int	main(void)
{
	printf("printf :{%x}", 255);
	ft_printf("test%utest", -1);
	return (0);
}
