/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 09:18:15 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 11:33:02 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format)
{
	char	*conversion;
	int		i;

	conversion = "cspdiuxX%";
	i = 0;
	while (conversion[i])
	{
		if (conversion[i] == format)
			return (1);
		i++;
	}
	return (0);
}
