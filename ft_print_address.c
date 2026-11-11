/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:16:41 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:20:16 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_print_address(unsigned long long address)
{
	ssize_t	ret;
	ssize_t	result;

	if (address == 0)
		return (ft_print_string("(nil)"));
	ret = ft_print_string("0x");
	if (ret == -1)
		return (-1);
	result = ret;
	ret = ft_print_hex_mini(address);
	if (ret == -1)
		return (-1);
	return (ret + result);
}
