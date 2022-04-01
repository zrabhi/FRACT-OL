#include "fractol.h"

void ft_mlx(t_fractol *data)
{
    data->mlx = mlx_init();
     data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "Fractol!");
     data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
     data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.line_length); 
    // ft_draw(data);
}