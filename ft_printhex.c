/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:51:36 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/06 16:08:42 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int value, const char c)
{
	if (value == 0)
		return ;
	ft_puthex(value / 16, c);
	if (value % 16 < 10)
		ft_putchar_fd(value % 16 + '0', 1);
	else
		ft_putchar_fd(value % 16 + c - 10, 1);
}

size_t ft_hexlen(unsigned int value)
{
	size_t len;

	len = 0;
	if (value == 0)
		return (1);
	while (value)
	{
		value /= 16;
		len++;
	}
	return (len);
}

void	ft_printhex(unsigned int value, const char c, int *counter)
{
	if (value == 0)
		*counter += (write(1, "0", 1));
	else
	{
		ft_puthex(value, c);
		*counter += ft_hexlen(value);
	}
}