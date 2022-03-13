#include "fractol.h"
int main(void)
{
    void    *mlx;
    void    *mlx_wind;
    int x;
    int y;
    t_data img;
    int a = 500;
    int b = 500;
    int r = 125;

    mlx = mlx_init();
    mlx_wind = mlx_new_window(mlx, WIDTH, HEIGHT, "fractol!");
    img.img = mlx_new_image(mlx, WIDTH, HEIGHT);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    x = 0;
    while( x < 700)
    { 
            //  y = 0;
        // y = 100;
        //     while(y < 700)
        // {
              
                //  y = a * sin(x);
                // if(((x - a) * (x - a)) + ((y - b) * (y - b))<= 125 * 125)
                        my_put_pixel(&img, x, y = a * sin(x), 0x0000FF);
                // y++;
                // } 
        x++;
       }
    // my_put_pixel(&img, x, y, 0x0000ff);
    
    // ft_line(&img, 0x0000ff, 600, 600, 700, 700);
     mlx_put_image_to_window(mlx, mlx_wind, img.img, 0, 0);
    mlx_loop(mlx);
}