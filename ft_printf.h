/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:19:43 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:39:01 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_print_char(int c);
int		ft_print_integer(int nb);
int		ft_print_string(char *str);
int		ft_print_percent(int c);
ssize_t	ft_print_unsigned_int(unsigned int nb);
ssize_t	ft_print_hex_big(unsigned long long nb);
ssize_t	ft_print_hex_mini(unsigned long long nb);
ssize_t	ft_print_address(unsigned long long address);
int		ft_handle_format(char speci, va_list ap);
int		ft_printf(const char *format, ...);
#endif
