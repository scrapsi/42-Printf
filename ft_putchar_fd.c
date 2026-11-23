/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 13:58:54 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 14:19:43 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main (void)
{
	ft_putchar_fd('1', 1);

	ft_putchar_fd('0', 0);

	ft_putchar_fd('2', 2);

	ft_putchar_fd('3', 3);

	return (0);
} */