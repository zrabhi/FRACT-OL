/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:16:30 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/23 12:14:45 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*src;

	i = 0;
	str = (unsigned char *)s1;
	src = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str[i] == src[i] && i < n - 1)
		i++;
	return ((str[i] - src[i]));
}
