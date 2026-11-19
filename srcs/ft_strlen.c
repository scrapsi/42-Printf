/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:12:03 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/19 11:09:17 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len])
		len++;
	return (len);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char *src;

	src = "Hello, World!";
	printf("ft_strlen(src) : {%zu}\n", ft_strlen(src));
	printf("strlen(src)    : {%zu}\n", strlen(src));

	return (0);
} */