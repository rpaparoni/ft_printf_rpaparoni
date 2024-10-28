/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:43:49 by rpaparon          #+#    #+#             */
/*   Updated: 2024/10/28 18:58:29 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	*ft_type(const char c, va_list value, int *counter)
{
	
}

int	*ft_printf(char const *str, ...)
{
	int		counter;
	va_list	args;

	counter = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str != '%')
			counter += ft_putchar(str[0]);
		else
			ft_type(*str++, args, &counter);
		str++;
	}
	i = 0;
	ve_end(args);
	return(counter);
}