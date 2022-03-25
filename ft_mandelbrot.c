#include "fractol.h"
#include <mlx.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>



void    ft_mandelbrot(void)
{
    t_fractol data;

    
    printf("hey1");
    t_data img;
     data.c_r = -0.7;
     data.c_i =  0.27015;
    data.max_iteration =300;
    data.x = 0;
    data.zoom =0.85;
    data.moveX = 0.01;
    data.moveY = 0.01;
    data.mlx = mlx_init();
    data.mlx_wind = mlx_new_window(data.mlx, WIDTH, HIEGHT, "FRACTOL!");
    img.img = mlx_new_image(data.mlx, WIDTH, HIEGHT);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);

    while(data.x < WIDTH)
    {
        data.y =0;
        while(data.y < HIEGHT)
        {
            //  data.c_r = 1.5* (data.x - WIDTH / 2) / (0.5 * data.zoom * WIDTH) - data.moveX;
            //  data.c_i =  (data.y - HIEGHT / 2) / (0.5 * data.zoom * HIEGHT) - data.moveY; 
            //  data.newRE = data.newIM = data.oldRE = data.oldIM = 0;
            //julia set---------------------------------------------------------------------------------
                  ft_julia(&data);
            //------------------------------------------------------------------------------------------
            data.iteration = 0;
            while(data.iteration < data.max_iteration)
                {  
                    data.oldRE = data.newRE;
                    data.oldIM = data.newIM;
                    data.newRE = data.oldRE * data.oldRE - data.oldIM * data.oldIM + data.c_r;
                    data.newIM = 2 * data.oldRE * data.oldIM + data.c_i;
                    // data.comp = ft(&data);
                    data.iteration++;
                    if (sqrt((data.newRE * data.newRE) + (data.newIM * data.newIM)) > 2)
                            break;
                }

             if(data.iteration < data.max_iteration)
                {
                    data.color = data.iteration * ALICEBLUE;
                    ft_my_put_pixel(&img, data.x, data.y, data.color);
                }
        data.y++;
        }
    data.x++;
    }
mlx_put_image_to_window(data.mlx, data.mlx_wind, img.img, 0, 0);
mlx_loop(data.mlx);
}

    
    