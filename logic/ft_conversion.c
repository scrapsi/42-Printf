/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:13 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:40:44 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_conversion(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar_len((char)va_arg(args, int), 1);
	if (format == 's')
		len += ft_putstr_len(va_arg(args, char *), 1);
	// if (format == 'p')
	//{
	//}
	if (format == 'd' || format == 'i')
		len += ft_putnbr_type(va_arg(args, int), 1, 's');
	if (format == 'u')
		len += ft_putnbr_type(va_arg(args, int), 1, 'u');
	if (format == 'x')
		len += ft_hex_type(va_arg(args, int), 'l');
	if (format == 'X')
		len += ft_hex_type(va_arg(args, int), 'u');
	if (format == '%')
		len += ft_putchar_len('%', 1);
	return (len);
}
