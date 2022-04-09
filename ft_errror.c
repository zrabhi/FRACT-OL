#include "fractol.h"

void	ft_init(t_fractol *data)
{
	data->mlx = mlx_init();
  data->mlx_wind = mlx_new_window(data->mlx, WIDTH, HIEGHT, "Fractol");
  data->img.img = mlx_new_image(data->mlx, WIDTH, HIEGHT);
  data->img.addr = mlx_get_data_addr(data->img.img, &data->img.bits_per_pixel, &data->img.line_length, &data->img.endian);
	data->x_scale = (4.0 / WIDTH);
	data->y_scale = (4.0 / HIEGHT);
	data->x_center = 2.0;
	data->y_center = 2.0;
	data->max_iteration = 50;
}
int   ft_error(char **av, t_fractol *data)
{
  

    if((ft_strcmp("-m",  av[1]) == 0))
       {
         data->value = 0;
         ft_draw(data, &mandelbrote);
         return(1);
        
       }
    if((ft_strcmp("-j",  av[1]) == 0))
       {    
            data->value = 1;
            julia_data(data); 
            ft_draw(data, &julia);
            return(1);
       }
      if((ft_strcmp("-b", av[1]) == 0))
      {
          data->value = 2;
          ft_draw(data, &burningship);
          return(1);
      }
      if(ft_strcmp("-help", av[1]) == 0)
          {
            purple();
            ft_putstr_fd("\n      it seems that you need little help \n      for mandelbrote use : ./fractol -m \n      for julia use : ./fractol -j \n      for buringship use : ./fractol -b \n\n");
            return (0);
          }
    return (0);
}