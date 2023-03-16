/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_other_functions2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 14:56:57 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/01/10 16:16:06 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal(int nb)
{
	int	counter;

	counter = ft_counter(nb);
	if (nb == -2147483648)
	{
		ft_char('-');
		ft_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_char('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_decimal(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_char(nb + 48);
	return (counter);
}

int	ft_counter(int thing)
{
	int	i;

	i = 0;
	if (thing <= 0)
		i++;
	while (thing != 0)
	{
		thing /= 10;
		i++;
	}
	return (i);
}
