/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:43:07 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 17:44:06 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_print_adress(unsigned long n, int *count)
{
	ft_putchar('0', count);
	ft_putchar('x', count);
	ft_add(n, count);
}
