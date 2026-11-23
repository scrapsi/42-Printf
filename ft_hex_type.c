/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:49:01 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:50:56 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_type(int n, char type)
{
	char	*base;

	if (type == 'l')
		base = "0123456789abcdef";
	if (type == 'u')
		base = "0123456789ABCDEF";
	if (n >= 16)
		ft_hex_type(n / 16, type);
	ft_putchar_fd(base[n % 16], 1);
	return (0);
}
