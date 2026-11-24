/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:23:54 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:30:26 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbr_base_s(long int n, const char *base)
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
	len += ft_putnbr_base_u(ul_n, base);
	return (len);
}

int	ft_putnbr_base_u(unsigned long int n, const char *base)
{
	int				len;
	unsigned long	l_base;

	len = 0;
	l_base = (unsigned long)ft_strlen(base);
	if (n >= l_base)
		len += ft_putnbr_base_u(n / l_base, base);
	len += ft_putchar(base[n % l_base]);
	return (len);
}
