/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:58:57 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:01:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define XUPPERR "0123456789ABCDEF"
# define XLOWER "0123456789abcdef"

#include "../fractol.h"
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_hex_lower(unsigned int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putnbr_uns(unsigned int nb, int *count);
void	ft_hex_upper(unsigned int n, int *count);
void	ft_add(unsigned long n, int *count);
int		ft_printf(const char *format, ...);
void	ft_print_adress(unsigned long n, int *count);

#endif
