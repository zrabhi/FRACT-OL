/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 17:40:07 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 17:41:14 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hex_upper(unsigned int n, int *count)
{
	if (n < 16)
		ft_putchar((XUPPERR[n]), count);
	if (n >= 16)
	{
		ft_hex_upper((n / 16), count);
		ft_hex_upper((n % 16), count);
	}
}
