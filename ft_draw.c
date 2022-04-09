#include "fractol.h"

void    ft_draw(t_fractol *data, void (*f)(t_fractol *data)) 
{
    data->x = 0;  
    while(data->x < WIDTH)
    {
        data->y = 0;
        while(data->y < HIEGHT)
            {
                f(data);
                if(data->iteration < data->max_iteration)
                {
                     data->color = data->iteration * ALICEBLUE;
                    ft_my_put_pixel(data, data->x, data->y, data->color);
                }
                else
                    ft_my_put_pixel(data, data->x, data->y, Black);
             data->y++; 
            }
    data->x++;
    }
	mlx_put_image_to_window(data->mlx, data->mlx_wind, data->img.img, 0, 0);
}   