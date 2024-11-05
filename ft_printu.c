/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printu.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:55:05 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/05 15:08:44 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_printu(unsigned int value, int *counter)
{
	if (value >= 10)
	{
		ft_printu(value / 10, counter);
		ft_printu(value % 10, counter);
	}
	else
		ft_putchar_fd(value + '0', 1);
	*counter++;
}