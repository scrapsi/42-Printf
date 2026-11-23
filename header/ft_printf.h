/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:35:47 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/23 16:37:47 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> //delete !!
# include <unistd.h>

int		ft_check_format(char format);
int		ft_conversion(va_list args, char format);
int		ft_has_format(const char *str);
int		ft_hex_type(int n, char type);
int		ft_parse(va_list args, const char *str);
int		ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));
int		ft_putchar_len(char c, int fd);
int		ft_putnbr_type(int n, int fd, char type);
int		ft_putstr_len(const char *str, int fd);

#endif