/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:09:46 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:13:36 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_uns(unsigned int nb, int *count)
{
	if (nb <= 9)
		ft_putchar((nb + '0'), count);
	if (nb > 9)
	{
		ft_putnbr_uns((nb / 10), count);
		ft_putnbr_uns((nb % 10), count);
	}
}
