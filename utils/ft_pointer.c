/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:45:09 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 17:02:35 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_pointer(void *content)
{
	int		i;
	char	*adresse;

	i = 0;
	while (adresse[i])
	{
		write(1, &adresse[i], 1	);
		i++;
	}
	return (i);
}
