/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:03:48 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:11:38 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb = nb * -1;
	}
	if (nb <= 9)
		ft_putchar((nb + 48), count);
	if (nb > 9)
	{
		ft_putnbr((nb / 10), count);
		ft_putnbr((nb % 10), count);
	}
}
/*int main()
{
    int nb = -123456780;
    printf("%d", ft_putnbr("%d", nb));
}*/
