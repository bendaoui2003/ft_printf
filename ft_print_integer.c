/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 16:27:34 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/12 11:51:52 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int nb)
{
	long	n;
	int		result;
	char	c;
	int		ret;

	n = nb;
	result = 0;
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		result = 1;
	}
	if (n >= 10)
	{
		ret = ft_print_integer(n / 10);
		if (ret == -1)
			return (-1);
		result += ret;
	}
	c = n % 10 + '0';
	if (write(1, &c, 1) == -1)
		return (-1);
	return (result + 1);
}
