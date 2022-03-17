/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:35:54 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:01:53 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_add(unsigned long n, int *count)
{
	if (n <= 15)
		ft_putchar(XLOWER[n], count);
	if (n >= 16)
	{
		ft_add((n / 16), count);
		ft_add((n % 16), count);
	}
}