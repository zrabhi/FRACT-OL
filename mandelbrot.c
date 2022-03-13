#include "fractol.h"
#include "ft_printf/ft_printf.h"


void    ft_mandelbrote(t_fractol *data)
{
    data->z_r= (data->a * data->a) + (data->b * data->b);
    data->z_i = data->a * data->b * 2;
    data->a= data->z_r + data->c 


}