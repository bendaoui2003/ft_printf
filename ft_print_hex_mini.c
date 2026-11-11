/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_mini.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:16:18 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:23:39 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_hex_mini(unsigned long long nb)
{
	char	*base;
	char	c;
	ssize_t	result;

	base = "0123456789abcdef";
	result = 0;
	if (nb >= 16)
	{
		result = ft_print_hex_mini(nb / 16);
		if (result == -1)
			return (-1);
	}
	c = base[nb % 16];
	if (write(1, &c, 1) == -1)
		return (-1);
	return (result + 1);
}
