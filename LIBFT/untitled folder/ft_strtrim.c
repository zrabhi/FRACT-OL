/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:37:09 by zrabhi            #+#    #+#             */
/*   Updated: 2021/11/28 10:58:42 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_find(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
	i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		start;
	int		end;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	start = i;
	while (s1[start] && ft_find(set, s1[start]) == 1)
		start++;
	end = ft_strlen(s1) -1 ;
	while (s1[end] && ft_find(set, s1[end]) == 1)
			end--;
	len = (end - start) + 1;
	if (start > end)
		len = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
