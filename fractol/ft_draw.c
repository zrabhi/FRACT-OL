#include "fractol.h"

//  void ft_mlx(t_fractol *data)
// {
    
     
//      data->mlx = mlx_init();
//      data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "Fractol!");
//      data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
//     //  data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.line_length); 
//  }

// void    iteration_calc(t_fractol *data)
// {
//     //  data->max_iteration = 300;
//       data->iteration = 0;
//           while(/*((data->newRE * data->newRE) + (data->newIM * data->newIM) <= 4) &&*/ (data->iteration < data->max_iteration))
//       {
//         //   printf("hello");  
//                       data->oldRE = data->newRE;
//             data->oldIM =data->newIM;
//              data->newRE = data->oldRE * data->oldRE - data->oldIM * data->oldIM + data->c_r;
//              data->newIM = 2 * data->oldRE * data->oldIM + data->c_i;
//             data->iteration++;
//        if(((data->newRE * data->newRE) + (data->newIM * data->newIM) > 4)) break;
      
      
      
//        }


void values(t_fractol *data)
{
     data->c_r = -0.7;
     data->c_i = 0.27015;
    data->max_iteration = 300;
    data->x = 0;
    data->y = 0;
}
void    ft_draw(t_fractol *data) 
{

    //  ft_mlx(data);
    //  data->c_r = -0.7;
    //  data->c_i =  0.27015;
    data->max_iteration= 300;
    // values(data);
    data->x =              0;
    data->mlx = mlx_init();
    data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "test!");
    data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
    data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.endian);

    while(data->x < WIDTH)
    {
        data->y = 0;
        while(data->y < HIEGHT)
            {
                    julia(data);
                if(data->iteration < data->max_iteration)
                {
                     data->color = data->iteration * ALICEBLUE;
                    ft_my_put_pixel(data, data->x, data->y, data->color);
                }
             data->y++; 
            }
    data->x++;
    }
mlx_put_image_to_window(data->mlx, data->mlx_wind, data->img.img, 0, 0);
mlx_loop(data->mlx);
}   