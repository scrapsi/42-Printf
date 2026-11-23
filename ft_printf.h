/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:35:47 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 15:39:17 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> //delete !!
# include <unistd.h>

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
int		ft_has_format(const char *str);
int		ft_putstr_len(const char *str);
int		ft_parse(va_list args, const char *str);
int		ft_check_format(char format);
int		ft_conversion(va_list, char format);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_type(int n, int fd, int type);
int		ft_hex(int n);

#endif