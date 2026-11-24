/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:24:01 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:30:26 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long int	len;
	unsigned long int	adresse;

	adresse = (unsigned long int)ptr;
	len = 0;
	len += write(1, "0x", 2);
	len += ft_putnbr_base_u(adresse, "0123456789abcdef");
	return (len);
}
