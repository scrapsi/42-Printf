/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:23:54 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 12:13:30 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbr_base_signed(long int n, const char *base)
{
	unsigned long int	ul_n;
	int					len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		ul_n = -(unsigned long int)n;
	}
	else
		ul_n = n;
	len += ft_putnbr_base_unsigned(ul_n, base);
	return (len);
}

int	ft_putnbr_base_unsigned(unsigned long int n, const char *base)
{
	int					len;
	unsigned long int	l_base;

	len = 0;
	l_base = (unsigned long int)ft_strlen(base);
	if (n >= l_base)
		len += ft_putnbr_base_unsigned(n / l_base, base);
	len += ft_putchar(base[n % l_base]);
	return (len);
}
