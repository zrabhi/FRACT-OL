#include "fractol.h"

int main()
{
    t_fractol data;
    t_data img;
    data.mlx = mlx_init();
    data.mlx_wind = mlx_new_window(data.mlx, HIEGHT, HIEGHT, "FRACTOL!");
    img.img = mlx_new_image(data.mlx, WIDTH, HIEGHT);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    ft_my_put_pixel(&img, 5, 5, 0x0000ff);
    mlx_put_image_to_window(data.mlx, data.mlx_wind, img.img, 0, 0);
    mlx_loop(data.mlx);
}