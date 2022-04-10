/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:41:07 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 02:10:27 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static	void	iteration_calc(t_fractol *data)
{
	data->iteration = 0;
	while ((data->iteration < data->max_iteration))
	{
		data->oldre = data->newre;
		data->oldim = data->newim;
		data->newre = data->oldre * data->oldre - data->oldim * data->oldim \
					+ data->c_r;
		data->newim = 2 * data->oldre * data->oldim + data->c_i;
		data->iteration++;
		if (((data->newre * data->newre) + (data->newim * data->newim) > 4))
			break ;
	}
}

void	mandelbrote(t_fractol *data)
{
	data->newre = 0;
	data->newim = 0;
	data->c_r = (data->x * data->x_scale) - data->x_center;
	data->c_i = (data->y * data->y_scale) - data->y_center;
	iteration_calc(data);
}
