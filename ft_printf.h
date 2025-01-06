/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:40:29 by rpaparon          #+#    #+#             */
/*   Updated: 2025/01/06 14:30:13 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdint.h> // Include the <stdint.h> header file instead of <cstdint>

int		ft_printf(const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_printp(unsigned long long value, int *counter);
void	ft_putnbr_fd(int n, int fd);
void	ft_printu(unsigned int value, int *counter);
void	ft_printhex(unsigned int value, const char c, int *counter);
void	ft_printid(int value, int *counter);

#endif