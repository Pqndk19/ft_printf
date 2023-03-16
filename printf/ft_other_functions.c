/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:54:52 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/01/10 16:16:42 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_int(unsigned int u)
{
	int	counter;

	counter = 0;
	if (u >= 10)
	{
		counter += ft_unsigned_int(u / 10);
		u = u % 10;
	}
	if (u < 10)
		counter += ft_char(u + 48);
	return (counter);
}

int	ft_hexa(unsigned int hexa, const char num_args)
{
	if (hexa == 0)
		return (ft_char('0'));
	else if (hexa > 15)
	{
		ft_hexa(hexa / 16, num_args);
		ft_hexa(hexa % 16, num_args);
	}
	else
	{
		if (hexa < 10)
			ft_char(hexa + 48);
		else
		{
			if (num_args == 'x')
				ft_char(hexa - 10 + 'a');
			else if (num_args == 'X')
				ft_char(hexa - 10 + 'A');
		}
	}
	return (ft_hexa_counter(hexa));
}

int	ft_hexa_counter(uintptr_t hexa_thing)
{
	size_t	i;

	i = 0;
	while (hexa_thing != 0)
	{
		hexa_thing /= 16;
		i++;
	}
	return (i);
}
