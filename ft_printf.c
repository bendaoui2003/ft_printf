/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbendaou <mbendaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:15:36 by mbendaou          #+#    #+#             */
/*   Updated: 2026/11/12 16:13:25 by mbendaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		result;
	va_list	ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			result = ft_handle_format(*++format, ap);
		else
			result = write(1, format, 1);
		if (result == -1)
		{
			va_end(ap);
			return (-1);
		}
		format++;
		count += result;
	}
	va_end(ap);
	return (count);
}
