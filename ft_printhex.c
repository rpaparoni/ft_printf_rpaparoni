/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:51:36 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/05 16:36:43 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

int	ft_hexlen(unsigned int value, const char c, int *counter)
{
	if (value == 0)
		*counter += (write(1, "0", 1));
	else
	{
		ft_puthex(value, c);
		*counter += ft_hexlen(value);
	}
}