/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:30:41 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 01:50:42 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	closed(t_fractol *data)
{
	(void)data;
	mlx_destroy_image(data->mlx, data->img.img);
	mlx_destroy_window(data->mlx, data->mlx_wind);
	free(data);
	exit(0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int	ft_check(char **av, t_fractol *data)
{
	if (ft_strcmp("-m", av[1]) == 0)
	{
		data->value = 0;
		ft_draw(data, &mandelbrote);
		return (1);
	}
	else if (ft_strcmp("-j", av[1]) == 0)
	{
		data->value = 1;
		julia_data(data);
		ft_draw(data, &julia);
		return (1);
	}
	else if (ft_strcmp("-b", av[1]) == 0)
	{
		data->value = 2;
		ft_draw(data, &burningship);
		return (1);
	}
	else
	{
		purple();
		ft_putstr("\n    Invalid fractol, Use a correct one\n\n");
	}
	return (0);
}
