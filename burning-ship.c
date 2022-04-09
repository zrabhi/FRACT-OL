#include "fractol.h"

static void    iteration_calc(t_fractol *data)
{
    data->iteration = 0;
	while (data->iteration < data->max_iteration)
	{
		data->oldRE = data->newRE * data->newRE - data->newIM * data->newIM;
		data->oldIM = 2 * data->newRE * data->newIM;
		data->newRE = data->oldRE + data->c_r;
		data->newIM = data->oldIM + data->c_i;
		if (data->newRE < 0)
			data->newRE *= -1;
		if (data->newIM < 0)
			data->newIM *= -1;
		data->iteration++;
		if ((data->newRE * data->newRE + data->newIM * data->newIM) > 4)
			break ;
	}
}

void	burningship(t_fractol *data)
{	        
            data->newRE = 0;
		    data->newIM = 0;
			data->c_r = (data->x * data->x_scale) - data->x_center;
			data->c_i = (data->y * data->y_scale) - data->y_center;
			iteration_calc(data);
}