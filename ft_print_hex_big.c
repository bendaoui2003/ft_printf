/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_big.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:16:25 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:23:22 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_hex_big(unsigned long long nb)
{
	char	*base;
	char	c;
	ssize_t	result;

	base = "0123456789ABCDEF";
	result = 0;
	if (nb >= 16)
	{
		result = ft_print_hex_big(nb / 16);
		if (result == -1)
			return (-1);
	}
	c = base[nb % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	return (result + 1);
}
