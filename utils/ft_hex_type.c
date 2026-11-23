/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:19 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:40:32 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_hex_type(int n, char type)
{
	char	*base;
	int		len;

	len = 0;
	if (type == 'l')
		base = "0123456789abcdef";
	if (type == 'u')
		base = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_hex_type(n / 16, type);
	len += ft_putchar_len(base[n % 16], 1);
	return (len);
}
