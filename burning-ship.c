/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   burning-ship.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:29:14 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/09 23:45:55 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	iteration_calc(t_fractol *data)
{
	data->iteration = 0;
	while (data->iteration < data->max_iteration)
	{
		data->oldre = data->newre * data->newre - data->newim * data->newim;
		data->oldim = 2 * data->newre * data->newim;
		data->newre = data->oldre + data->c_r;
		data->newim = data->oldim + data->c_i;
		if (data->newre < 0)
			data->newre *= -1;
		if (data->newim < 0)
			data->newim *= -1;
		data->iteration++;
		if ((data->newre * data->newre + data->newim * data->newim) > 4)
			break ;
	}
}

void	burningship(t_fractol *data)
{
		data->newre = 0;
		data->newim = 0;
		data->c_r = (data->x * data->x_scale) - data->x_center;
		data->c_i = (data->y * data->y_scale) - data->y_center;
	iteration_calc(data);
}
