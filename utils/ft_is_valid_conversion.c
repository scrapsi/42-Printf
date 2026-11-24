/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_conversion.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:27:02 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 10:01:47 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_is_valid_conversion(char format)
{
	const char	*conversion;
	int			i;

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
