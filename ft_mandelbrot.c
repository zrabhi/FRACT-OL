#include "fractol.h"
#include <mlx.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


// #define WIDTH 800
// #define HEIGHT 600

// typedef struct	s_data {
// 	void	*img;
// 	char	*addr;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// }				t_data;
// typedef struct s_fractol{
//     int a;
//     int b;
//     int z;
//     int z_r;
//     int z;
//     int iteration;
// } t_fractol;

// // functions----------------------.
// void    my_put_pixel(t_data *data, int x, int y, int color)
// {
//     char *dst;

//     dst = data.addr + (y * data.line_length + x * (data.bits_per_pixel / 8));
//     *(unsigned char *)dst = color;
// }
// // (a function that draws a cicrle) : out of the poject subject
// void ft_line(t_data *img, int color, int x1, int y1, int x2, int y2)
// {
//     int m_new;
//     int slope_error_new;
//     int y;
//     int x;
//     int xend;

//     m_new = 2 * (y2 - y1);
//     slope_error_new = labs(m_new) - (x2 - x1); // p0 = 2Δy - Δx
//     if (x1 > x2)
//     {
//         x = x2;
//         y = y2;
//         xend = x1;
//     }
//     else
//     {
//         x = x1;
//         y = y1;
//         xend = x2;
//     }
//     while (x < xend)
//     {
//         my_put_pixel(img, x, y, color);
//         slope_error_new += m_new; //p(k+1) = p(k) + 2Δy
//         if (abs(slope_error_new) >= 0)
//         {
//             (y1 > y2) ? y++ : y--;
//             slope_error_new -= 2 * (abs(x2 - x1));
//         }
//         x++;
//     }
// }

void    ft_mandelbrot(void)
{
    t_fractol data;

    
    printf("hey1");
    t_data img;
    // data.c_r = -0.7;
    //  data.c_i =  0.27015;
    data.max_iteration =500;
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
             data.c_r = 1.5* (data.x - WIDTH / 2) / (0.5 * data.zoom * WIDTH) - data.moveX;
             data.c_i =  (data.y - HIEGHT / 2) / (0.5 * data.zoom * HIEGHT) - data.moveY; 
             data.newRE = data.newIM = data.oldRE = data.oldIM = 0;
            //julia set---------------------------------------------------------------------------------
                //    ft_julia(&data);
            //   data.newRE = 1.5 * (data.x - WIDTH / 2) / (0.5 *zoom * WIDTH) + moveX;
            //   data.newIM = (data.y - HIEGHT / 2) /(0.5 * zoom * HIEGHT) +  moveY;
            // data.newRE = data.oldRE * data.oldRE * data.oldIM + 
            data.iteration = 0;
            while(data.iteration < data.max_iteration)
                {  
                    data.oldRE = data.newRE;
                    data.oldIM = data.newIM;
                    data.newRE = data.oldRE * data.oldRE - data.oldIM * data.oldIM + data.c_r;
                    data.newIM = 2 * data.oldRE * data.oldIM + data.c_i;
                    //  ft_calculate(&data);
                 data.iteration++;
                    if(sqrt((data.newRE * data.newRE) + (data.newIM * data.newIM)) > 2)
                        break;
                }

             if(data.iteration < data.max_iteration)
                  {
                    // data.color = data.iteration * 0xffffff;
                    // 603601
                    // E83A14
                    // DA1212
                ft_my_put_pixel(&img, data.x, data.y, (data.iteration* WHITE));
                  }
                // else {
                //     ft_my_put_pixel(&img, data.x, data.y, 0xE83A14);
                
        data.y++;
        }
     data.x++;
    }
mlx_put_image_to_window(data.mlx, data.mlx_wind, img.img, 0, 0);
mlx_loop(data.mlx);
}

    
    