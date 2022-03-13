/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:08:08 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/24 13:30:01 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	char	*str;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	if (len > slen)
		len = slen;
	str = (char *)malloc(sizeof(char ) * (len + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (s[i] && i < len && start <= slen)
	{
		str[j] = s[start + i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
