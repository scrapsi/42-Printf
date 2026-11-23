/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:35:18 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:40:00 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(va_list args, char format)
{
	if (format == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	if (format == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	// if (format == 'p')
	//{
	//}
	if (format == 'd' || format == 'i')
		ft_putnbr_type(va_arg(args, int), 1, 0);
	if (format == 'u')
		ft_putnbr_type(va_arg(args, int), 1, 1);
	if (format == 'x')
		ft_hex(va_arg(args, int));
	// if (format == 'X')
	//{
	//}
	if (format == '%')
		ft_putchar_fd('%', 1);
	return (0);
}
