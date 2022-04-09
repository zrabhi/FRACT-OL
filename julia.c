#include "fractol.h"


void    julia_data(t_fractol *data)
{
    data->julia_var_re= 0.285;
    data->julia_var_im = 0.01;
}
static void    iteration_calc(t_fractol *data)
{
    data->iteration = 0;
    while( (data->iteration < data->max_iteration))
    { 
            data->oldRE = data->newRE;
            data->oldIM =data->newIM;
            data->newRE = data->oldRE * data->oldRE - data->oldIM * data->oldIM + data->julia_var_re;
            data->newIM = 2 * data->oldRE * data->oldIM + data->julia_var_im;
            data->iteration++;
       if(((data->newRE * data->newRE) + (data->newIM * data->newIM) > 4)) break;
      }
}

void    julia(t_fractol *data)
{  

    data->newRE = (data->x * data->x_scale) - data->x_center;
    data->newIM = (data->y * data->y_scale) - data->y_center;
    iteration_calc(data);
}