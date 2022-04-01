/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_lower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:37:49 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:00:28 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hex_lower(unsigned int n, int *count)
{
	if (n <= 15)
		ft_putchar(XLOWER[n], count);
	if (n >= 16)
	{
		ft_hex_lower((n / 16), count);
		ft_hex_lower((n % 16), count);
	}
}
