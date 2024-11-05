/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaparon <rpaparon@student.42madrid.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:40:29 by rpaparon          #+#    #+#             */
/*   Updated: 2024/11/05 14:29:56 by rpaparon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int    *ft_printf(char const *format, ...);
int    ft_putchar(char c);
void	ft_putstr(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);


#endif