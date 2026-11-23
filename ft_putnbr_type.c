/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:33 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:18:52 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_type(int n, int fd, char type)
{
	long	nb;
	int		len;

	len = 0;
	if (type == 'u')
		nb = (unsigned int)n;
	else
	{
		nb = n;
		if (nb < 0)
		{
			len += ft_putchar_len('-', fd);
			nb = -nb;
		}
	}
	if (nb > 9)
		len += ft_putnbr_type(nb / 10, fd, 'd');
	len += ft_putchar_len((nb % 10) + '0', fd);
	return (len);
}
