#include "fractol.h"

void    ft_julia(t_fractol *data)
{
    // printf("hey");
    data->newRE = (data->x - WIDTH/2.0)*(4.0/WIDTH);
    data->newIM = (data->y -HIEGHT/2.0)*(4.0/WIDTH);

  }