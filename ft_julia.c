#include "fractol.h"

void    ft_julia(t_fractol *data)
{
    // printf("hey");
    data->newRE = 1.5 * (data->x - WIDTH / 2) / (0.5 * data->zoom * WIDTH) + data->moveX;
    data->newIM =  (data->y - HIEGHT / 2) /(0.5 * data->zoom * HIEGHT) +  data->moveY;
 }