/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:15:47 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:23:02 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_unsigned_int(unsigned int nb)
{
	ssize_t	result;
	char	c;

	result = 0;
	if (nb >= 10)
	{
		result = ft_print_unsigned_int(nb / 10);
		if (result == -1)
			return (-1);
	}
	c = nb % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (result + 1);
}
