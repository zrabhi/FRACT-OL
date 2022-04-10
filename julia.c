/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:36:57 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 02:05:08 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	julia_data(t_fractol *data)
{
	data->julia_var_re = 0.285;
	data->julia_var_im = 0.01;
}

static	void	iteration_calc(t_fractol *data)
{
	data->iteration = 0;
	while ((data->iteration < data->max_iteration))
	{
		data->oldre = data->newre;
		data->oldim = data->newim;
		data->newre = data->oldre * data->oldre - data->oldim * data->oldim \
					+ data->julia_var_re;
		data->newim = 2 * data->oldre * data->oldim + data->julia_var_im;
		data->iteration++;
		if (((data->newre * data->newre) + (data->newim * data->newim) > 4))
			break ;
	}
}

void	julia(t_fractol *data)
{
	data->newre = (data->x * data->x_scale) - data->x_center;
	data->newim = (data->y * data->y_scale) - data->y_center;
	iteration_calc(data);
}
