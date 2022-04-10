/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:02:09 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 02:00:35 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	purple(void)
{
	ft_putstr("\033[0;35m");
}

void	red(void)
{
	ft_putstr("\033[1;31m");
}

void	ft_get_coler(t_fractol *data)
{
	data->color_code++;
	if (data->color_code == 0)
		data->color = 0xff0801;
	else if (data->color_code == 1)
		data->color = 0xfff600;
	else if (data->color_code == 2)
		data->color = 0x18ff00;
	else if (data->color_code == 3)
		data->color = 0xf4f4f5;
	else if (data->color_code == 4)
		data->color = 0xb0ffd9;
	else if (data->color_code == 5)
		data->color = 0xffffd9;
	else if (data->color_code == 6)
		data->color = 0xFFFCA7;
	else if (data->color_code == 7)
		data->color = 0xf1f1e1;
	else if (data->color_code == 8)
		data->color = 0xF0F8FF;
	else if (data->color_code == 9)
		data->color_code = 0;
}

void	ft_init(t_fractol *data)
{
	data->mlx = mlx_init();
	data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "Fractol");
	data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
	data->img.addr = mlx_get_data_addr(data->img.img, \
	&data->img.bits_per_pixel, &data->img.line_length, &data->img.endian);
	data->x_scale = (4.0 / WIDTH);
	data->y_scale = (4.0 / HIEGHT);
	data->x_center = 2.0;
	data->y_center = 2.0;
	data->max_iteration = 50;
	data->color = 0xf4f4f5;
	data->color_code = 0;
}

void	ft_putstr(char *s)
{
	int	i;

	if (s)
	{	
		i = 0;
		while (s[i])
			write(1, &s[i++], 1);
	}
}
