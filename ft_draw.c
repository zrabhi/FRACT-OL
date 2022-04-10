/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:34:05 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 01:53:39 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_draw(t_fractol *data, void (*f)(t_fractol *data))
{
	int	color;

	data->x = 0;
	while (data->x < WIDTH)
	{
		data->y = 0;
		while (data->y < HIEGHT)
		{
			f(data);
			if (data->iteration < data->max_iteration)
			{
				color = data->iteration * data->color;
				ft_my_put_pixel(data, data->x, data->y, color);
			}
			else
				ft_my_put_pixel(data, data->x, data->y, BLACK);
		data->y++;
		}
	data->x++;
	}
	mlx_put_image_to_window(data->mlx, data->mlx_wind, data->img.img, 0, 0);
}
