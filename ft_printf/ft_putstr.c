/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:12:52 by zrabhi            #+#    #+#             */
/*   Updated: 2021/12/10 18:13:54 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	int	i;

	if (str == NULL)
		ft_putstr("(null)", count);
	else
	{
		i = 0;
		while (str[i])
			ft_putchar(str[i++], count);
	}
}
