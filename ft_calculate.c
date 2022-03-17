#include "fractol.h"

void  ft_calculate(t_fractol *data)
{
    data->oldRE = data->newRE;
    data->oldIM =data->newIM;
    data->newRE = data->oldRE * data->oldRE - data->oldIM * data->oldIM + data->c_r;
    data->newIM = 2 * data->oldRE * data->oldIM + data->c_r; 
}