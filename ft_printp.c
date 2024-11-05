/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:06:03 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/05 14:42:57 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ptrlen(uintptr_t num)
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num /= 16;
		len++;
	}
	return (len);
}

void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}	
	else
	{
		if (num >= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	ft_printp(unsigned long long value, int *counter)
{
	(*counter) += write(1, "0x", 2);
	if (value == 0)
		(*counter) += (write(1, "0", 1));
	else
	{
		ft_putptr(value);
		(*counter) += ft_ptrlen(value);
	}
}