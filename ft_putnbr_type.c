/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:18:40 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:18:41 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_type(int n, int fd, int type)
{
	long	nb;

	if (type == 1)
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
