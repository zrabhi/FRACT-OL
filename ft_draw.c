#include "fractol.h"
#include "ft_printf/ft_printf.h"

void    ft_draw(t_fractol *data)
{


    t_data img;
    data->c_r = -0.7;
    data->c_i = 0.27015;
    data->max_iteration = 100;
    data->x = 0;
    double zoom =1;
    double moveX = 0;
    double  moveY = 0;
    data->mlx = mlx_init();
    data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "FRACTOL!");
    img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);

    while(data->x < WIDTH)
    {
        data->y = 0;
        while(data->y < HIEGHT)
        {
            // ft_map(data);
            data->newRE = 1.5 * (data->x - WIDTH / 2) / (0.5 *zoom * WIDTH) + moveX;
            data->newIM = (data->y - HIEGHT / 2) /(0.5 * zoom * HIEGHT) +  moveY;
            data->iteration = 0;
            while(data->iteration < data->max_iteration)
                {  
                    // ft_mandelbrote(data);
                    data->iteration++;
                    data->oldRE = data->newRE;
                    data->oldIM = data->newIM;
                    data->newRE = data->oldRE * data->oldRE - data->oldIM * data->oldIM + data->c_r;
                    data->newIM = 2 * data->oldRE * data->oldIM + data->c_i;
                    if((data->newRE * data->newRE) + (data->newIM * data->newIM) > 4)
                        break;
                }
             if(data->iteration < data->max_iteration)
            data->color = data->iteration * 0xFF5349;
            ft_my_put_pixel(&data, data->x, data->y, data->color);
        }
    }

}