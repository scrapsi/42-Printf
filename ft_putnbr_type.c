/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:18:40 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:52:21 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_type(int n, int fd, char type)
{
	long	nb;

	if (type == 'u')
		nb = (unsigned int)n;
	else
	{
		nb = n;
		if (nb < 0)
		{
			ft_putchar_fd('-', fd);
			nb = -nb;
		}
	}
	if (nb > 9)
		ft_putnbr_type(nb / 10, fd, 1);
	ft_putchar_fd((nb % 10) + '0', fd);
}
