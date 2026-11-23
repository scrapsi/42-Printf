/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:22 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:18:33 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list args, const char *str)
{
	int		i;
	int		len;
	char	*current;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_check_format(str[i++]) == 1)
			len += ft_conversion(args, str[i]);
		else
			len += ft_putchar_len(str[i], 1);
		i++;
	}
	return (len);
}
