/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:53:10 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 11:35:34 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len])
	{
		ft_putchar_fd(str[len], 1);
		len++;
	}
	return (len);
}
