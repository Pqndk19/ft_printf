/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:48:16 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/01/10 16:20:27 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list list, const char num_args)
{
	if (num_args == 'c')
		return (ft_char(va_arg(list, int)));
	else if (num_args == 's')
		return (ft_string(va_arg(list, char *)));
	else if (num_args == 'p')
		return (ft_pointer(va_arg(list, unsigned long long)));
	else if (num_args == 'd' || num_args == 'i')
		return (ft_decimal(va_arg(list, int)));
	else if (num_args == 'u')
		return (ft_unsigned_int(va_arg(list, unsigned int)));
	else if (num_args == 'x' || num_args == 'X')
		return (ft_hexa(va_arg(list, unsigned int), num_args));
	else if (num_args == '%')
		return (ft_char('%'));
	return (0);
}

int	ft_printf(const char *num_args, ...)
{
	va_list	list;
	int		index;
	int		n;

	n = 0;
	index = 0;
	va_start(list, num_args);
	while (num_args[index])
	{
		if (num_args[index] == '%')
		{
			n += ft_type(list, num_args[index + 1]);
			index++;
		}
		else
			n += ft_char(num_args[index]);
		index++;
	}
	va_end(list);
	return (n);
}
