/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:13 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:19:46 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_conversion(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar((char)va_arg(args, int));
	else if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len += ft_putnbr_base_signed(va_arg(args, int), "0123456789");
	else if (format == 'u')
		len += ft_putnbr_base_unsigned(va_arg(args, unsigned int),
				"0123456789");
	else if (format == 'x')
		len += ft_putnbr_base_unsigned(va_arg(args, int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_putnbr_base_unsigned(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	else if (format == '%')
		len += ft_putchar('%');
	return (len);
}
