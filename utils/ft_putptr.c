/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:24:01 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 09:39:11 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int ft_putptr(void *ptr)
{
	int		i;
	char	*adresse;

	i = 0;
	while (adresse[i])
	{
		write(1, &adresse[i], 1);
		i++;
	}
	return (i);
}
