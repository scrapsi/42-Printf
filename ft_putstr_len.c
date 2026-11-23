/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:37 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:09:37 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(const char *str, int fd)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
	{
		ft_putchar_len(str[len], fd);
		len++;
	}
	return (len);
}
