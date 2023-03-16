/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:40:58 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/01/10 16:17:35 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_string(char *s)
{
	int	index;

	index = 0;
	if (s == NULL)
		return (write(1, "(null)", 6));
	while (s[index] != '\0')
	{
		write(1, &s[index], 1);
		index++;
	}
	return (index);
}

int	ft_pointer(unsigned long long ptr)
{
	int	length;

	if (ptr == 0)
		return (ft_string("(nil)"));
	else
	{
		length = ft_string("0x");
		ft_endpoint(ptr);
	}
	return (length += ft_hexa_counter(ptr));
}

int	ft_endpoint(uintptr_t ptr)
{
	if (ptr > 15)
	{
		ft_endpoint(ptr / 16);
		ft_endpoint(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_char(ptr + 48);
		else
			ft_char(ptr - 10 + 'a');
	}
	return (1);
}
