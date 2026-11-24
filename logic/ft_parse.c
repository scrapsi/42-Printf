/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:22 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:38:45 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_parse(va_list args, const char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] && ft_is_valid_conversion(str[i + 1]))
		{
			len += ft_conversion(args, str[i + 1]);
			i += 2;
		}
		else
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
	return (len);
}
