/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:29:53 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 02:16:24 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	hundle_no_event(t_fractol *data)
{
	if (data->value == 0)
		ft_draw(data, &mandelbrote);
	else if (data->value == 1)
		ft_draw(data, &julia);
	else if (data->value == 2)
		ft_draw(data, &burningship);
	return (0);
}

void	reset_fract(t_fractol *data)
{
	data->x_scale = (4.0 / WIDTH);
	data->y_scale = (4.0 / HIEGHT);
	data->x_center = 2.0;
	data->y_center = 2.0;
	data->max_iteration = 50;
	if (data->value == 0)
		ft_draw(data, &mandelbrote);
	else if (data->value == 1)
		ft_draw(data, &julia);
}

int	key_press(int keycode, t_fractol *data)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 126)
		data->y_center += 30 * data->x_scale;
	else if (keycode == 125)
		data->y_center -= 30 * data->x_scale;
	else if (keycode == 124)
		data->x_center -= 30 * data->x_scale;
	else if (keycode == 123)
		data->x_center += 30 * data->x_scale;
	else if (keycode == 69)
		data->max_iteration += 50;
	else if (keycode == 78)
		data->max_iteration -= 50;
	else if (keycode == 15)
		reset_fract(data);
	else if (keycode == 35)
		ft_get_coler(data);
	return (0);
}

int	mouse_press(int key, int x, int y, t_fractol *data)
{
	if (key == 4)
	{
		data->x_scale *= 0.5;
		data->y_scale *= 0.5;
		data->max_iteration += 20;
		data->x_center = data->x_center - (x * data->x_scale);
		data->y_center = data->y_center - (y * data->y_scale);
	}
	else if (key == 5)
	{
		data->x_center = data->x_center + (x * data->x_scale);
		data->y_center = data->y_center + (y * data->y_scale);
		data->x_scale /= 0.5;
		data->y_scale /= 0.5;
		data->max_iteration -= 20;
	}
	else if (key == 1)
		data->value2 += 1;
	return (0);
}

int	mouse_move(int x, int y, t_fractol *data)
{
	if (data->value2 % 2)
	{
		if (x >= 0 && x <= WIDTH && y >= 0 && y <= HIEGHT)
		{
			data->julia_var_re = (data->x_scale * x) - data->x_center;
			data->julia_var_im = (data->x_scale * y) - data->y_center;
		}
		else
			return (0);
	}
	else if (!data->value2 % 2)
	{
		data->julia_var_re = data->julia_var_re;
		data->julia_var_im = data->julia_var_im;
	}
	return (0);
}
