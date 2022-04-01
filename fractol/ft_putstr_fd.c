/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:39:07 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 20:47:43 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

void	ft_putstr_fd(char *s)
{
	int	i;

	if (s)
	{	
		i = 0;
		while (s[i])
			write(1, &s[i++], 1);
	}
}