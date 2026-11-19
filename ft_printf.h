/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:35:47 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/19 14:54:32 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t		ft_strlen(const char *s);
void		ft_putchar_fd(char c, int fd);
static int	ft_has_format(const char *str);
static int	ft_putstr_len(const char *str);
int			ft_parse(va_list args, const char *str);

#endif