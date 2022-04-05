#include "fractol.h"

int	mouse_press(int key, t_fractol *data)
{
	printf("hey");
	if (key == 4)
	{
		data->x_scale *= 0.5;
		data->y_scale *= 0.5;
		data->max_iteration += 20;
		data->x_center = data->x_center - (data->x * data->x_scale);
		data->y_center = data->y_center - (data->y * data->y_scale);
	}
	else if (key == 5)
	{
		data->x_center = data->x_center + (data->x * data->x_scale);
		data->y_center = data->y_center + (data->y * data->y_scale);
		data->x_scale /= 0.5;
		data->y_scale /= 0.5;
		data->max_iteration -= 20;
	}
	else if (key == 1)
		data->value2 += 1;
	return (0);
}



int	key_press(int keycode, t_fractol *data)
{
	if (keycode == 53)
		exit(0);
	else if (keycode == 126)
		data->y_center += 30 * data->x_scale;
	else if (keycode == 125)
		data->y_center -= 30 * data->x_scale;
	else if (keycode == 124)
		data->x_center -= 30 * data->x_scale;
	else if (keycode == 123)
		data->x_center += 30 * data->x_scale;
	else if (keycode == 69)
		data->max_iteration += 50;
	else if (keycode == 78)
		data->max_iteration -= 50;
	// else if (keycode == 15)
	// 	reset_fract(data);
	// else if (keycode == 83
	// 	&& (data->frequenc >= 0 && data->frequenc <= 15))
	// 	data->frequenc = (data->frequenc + 1.2) * 1;
	return (0);
}
int	mouse_move(t_fractol *data)
{
	if (data->value2 % 2)
	{
		if (data->x >= 0 && data->x <= WIDTH && data->y >= 0 && data->y <= HIEGHT)
		{
			data->c_r = ((4.0 / WIDTH) * data->x) - 2.0;
			data->c_i = ((4.0 / HIEGHT) * data->y) - 2.0;
		}
		else
			return (0);
	}
	else if (!data->value2 % 2)
	{
		data->c_r = data->c_r;
		data->c_i = data->c_i;
	}
	return (0);
}

void    ft_draw(t_fractol *data, void (*f)(t_fractol *data)) 
{

    data->x = 0;
    data->mlx = mlx_init();
    data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "Fractol");
    data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
    data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.endian);

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
             data->y++; 
            }
    data->x++;
    }
mlx_put_image_to_window(data->mlx, data->mlx_wind, data->img.img, 0, 0);
mlx_key_hook(data->mlx_wind ,&key_press, data);
            mlx_hook(data->mlx_wind, 2, 0, &mouse_press, data);
            mlx_hook(data->mlx_wind, 4, 0, &mouse_move, data);
            mlx_loop(data->mlx);
}   