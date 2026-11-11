/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:16:33 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/11 11:28:53 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	char	chr;
	int		result;

	chr = (char)c;
	result = write(1, &chr, 1);
	if (result == -1)
	{
		return (-1);
	}
	return (1);
}
