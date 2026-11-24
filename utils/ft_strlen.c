/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:12:03 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:02:26 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_strlen(const char *s)
{
	int len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}