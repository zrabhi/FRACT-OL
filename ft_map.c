#include "fractol.h"
#include "ft_printf/ft_printf.h"


int ft_map(t_fractol *data)
{
  return (data->x - data->in_min) * (data->out_max - data->out_min) / (data->in_max - data->in_min) + data->out_min;
}