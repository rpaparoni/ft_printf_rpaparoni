/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:55:05 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:42 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printu(unsigned int value, int *counter)
{
	if (value >= 10)
		ft_printu(value / 10, counter);
	ft_putchar_fd(value % 10 + '0', 1);
	(*counter)++;
}
