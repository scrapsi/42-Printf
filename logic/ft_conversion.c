/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:13 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 09:41:00 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_conversion(va_list args, char format)
{
	int		len;
	void	*current;

	len = 0;
	if (format == 'c')
		len += ft_putchar((char)va_arg(args, int));
	if (format == 's')
		len += ft_putstr(va_arg(args, char *));
	if (format == 'p')
		len += ft_putptr(va_arg(args, void *));
	if (format == 'd' || format == 'i')
		len += ft_putnbr(va_arg(args, int));
	if (format == 'u')
		len += ft_putnbr(va_arg(args, int));
	if (format == 'x')
		len += ft_puthex(va_arg(args, int), "0123456789abcdef");
	if (format == 'X')
		len += ft_puthex(va_arg(args, int), "0123456789ABCDEF");
	if (format == '%')
		len += ft_putchar('%');
	return (len);
}
