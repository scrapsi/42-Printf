/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 17:35:18 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 14:38:42 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversion(va_list args, char format)
{
	if (format == 'c')
		ft_putchar_fd((char)va_arg(args, int), 1);
	// if (format == 's')
	//{
	//}
	// if (format == 'p')
	//{
	//}
	// if (format == 'd')
	//{
	//}
	// if (format == 'i')
	//{
	//}
	// if (format == 'u')
	//{
	//}
	// if (format == 'x')
	//{
	//}
	// if (format == 'X')
	//{
	//}
	// if (format == '%')
	//{
	//}
	return (0);
}
