/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:24:04 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:40:50 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putstr(const char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return (len);
}
