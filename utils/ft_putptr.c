/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 09:24:01 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 10:29:21 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../header/ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putptr(void *ptr)
{
	unsigned char	*adresse;
	int				i;

	adresse = (unsigned char *)ptr;
	printf("%s", adresse);
	i = 0;
	while (adresse[i])
	{
		printf("%c", adresse[i]);
		printf("test");
		// write(1, &adresse[i], 1);
		i++;
	}
	return (i);
}

int	main(void)
{
	int number;
	int *ptr;

	number = 42;
	ptr = &number;
	ft_putptr((void *)&number);
}