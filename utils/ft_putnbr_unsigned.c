/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:44:23 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 10:01:57 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	long	l_n;
	int		len;

	l_n = n;
	len = 0;
	if (l_n > 9)
		len += ft_putnbr_unsigned(l_n / 10);
	len += ft_putchar((l_n % 10) + '0');
	return (len);
}
