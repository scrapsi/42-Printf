/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 16:09:25 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:40:32 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	len = 0;
	va_start(args, str);
	if (!ft_has_format(str))
		len = ft_putstr_len(str, 1);
	else
		len = ft_parse(args, str);
	va_end(args);
	return (len);
}

int	main(void)
{
	ft_printf("%d", ft_printf("%c, %c, %c, %c %x", 'c', 'c', 'c', 'c', 255));
	//ft_printf("\n");
	//printf("%d", printf("%c, %c, %c, %c%x", 'c', 'c', 'c', 'c'));
	return (0);
}
