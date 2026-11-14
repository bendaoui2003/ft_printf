/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:16:53 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:16:55 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char speci, va_list ap)
{
	if (speci == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (speci == 's')
		return (ft_print_string(va_arg(ap, char *)));
	else if (speci == 'd' || speci == 'i')
		return (ft_print_integer(va_arg(ap, int)));
	else if (speci == '%')
		return (ft_print_char('%'));
	else if (speci == 'u')
		return (ft_print_unsigned_int(va_arg(ap, unsigned int)));
	else if (speci == 'x')
		return (ft_print_hex_mini(va_arg(ap, unsigned int)));
	else if (speci == 'X')
		return (ft_print_hex_big(va_arg(ap, unsigned int)));
	else if (speci == 'p')
		return (ft_print_address((unsigned long long)va_arg(ap, void *)));
	return (-1);
}
