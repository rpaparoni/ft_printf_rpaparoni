/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:40:29 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/06 16:07:21 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		*ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putchar_fd(char c);
void	ft_putstr(char *s, int fd);
size_t	ft_printp(unsigned long long value, int *counter);
void	ft_putnbr_fd(int n, int fd);
void	ft_printu(unsigned int value, int *counter);
size_t	ft_printhex(unsigned int value, const char c, int *counter);


#endif