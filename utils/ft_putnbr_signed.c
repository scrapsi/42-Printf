/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:23:57 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 09:54:41 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbr_signed(int n)
{
	long	l_n;
	int		len;

	l_n = n;
	len = 0;
	if (l_n < 0)
	{
		len += ft_putchar('-');
		l_n = -l_n;
	}
	if (l_n > 9)
		len += ft_putnbr_signed(l_n / 10);
	len += ft_putchar((l_n % 10) + '0');
	return (len);
}
