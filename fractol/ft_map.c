#include "fractol.h"
#include "ft_printf/ft_printf.h"


void ft_map(t_fractol *data)
{
  data->newRE = (data->x - WIDTH / 2.0) * (4.0 / WIDTH);
  data->newIM = (data->y - HIEGHT/2.0) * (4.0/ HIEGHT);
}