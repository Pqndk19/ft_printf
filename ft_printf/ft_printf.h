/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:38:08 by mmassa-r          #+#    #+#             */
/*   Updated: 2023/01/10 16:18:38 by mmassa-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_type(va_list list, const char num_args);
int	ft_printf(const char *num_args, ...);
int	ft_char(char c);
int	ft_string(char *s);
int	ft_pointer(unsigned long long ptr);
int	ft_endpoint(uintptr_t ptr);
int	ft_decimal(int nb);
int	ft_unsigned_int(unsigned int u);
int	ft_hexa(unsigned int hexa, const char num_args);
int	ft_counter(int thing);
int	ft_hexa_counter(uintptr_t hexa_thing);

#endif