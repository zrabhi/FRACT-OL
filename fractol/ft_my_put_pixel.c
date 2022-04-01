#include "fractol.h"

void    ft_my_put_pixel(t_fractol *data, int x, int y, int color)
{
    char *dst;
;  
    dst = data->img.addr + (y * data->img.line_length + x * (data->img.bits_per_pixel / 8));
    *(unsigned int *)dst = color;
}