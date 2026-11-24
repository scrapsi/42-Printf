/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baantoin <baantoin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:35:47 by baantoin          #+#    #+#             */
/*   Updated: 2026/11/24 11:49:44 by baantoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> //delete
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_parse(va_list args, const char *str);
int	ft_conversion(va_list args, char format);
int	ft_is_valid_conversion(char format);
int	ft_has_percent(const char *str);
int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_putnbr_signed(long int n);
int	ft_putnbr_base_signed(long int n, const char *base);
int	ft_putnbr_base_unsigned(unsigned long int n, const char *base);
int	ft_putptr(void *ptr);
int	ft_strlen(const char *s);

#endif
