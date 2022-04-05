#include "fractol.h"

void    ft_error(int ac, char **av)
{
  t_fractol *data;
  data = (t_fractol *)malloc(sizeof(t_fractol));
  if(!data)
      return ;
      data->max_iteration= 300;
   data->x_scale = (4.0 / WIDTH);
	data->y_scale = (4.0 / HIEGHT);
	data->x_center = 2.0;
	data->y_center = 2.0;
  if(ac == 2)
  {
    if((ft_strcmp("-m",  av[1]) == 0))
       {
            ft_draw(data, &mandelbrote);
            // mlx_loop(data->mlx_wind, 4, 0, &mouse_press, data);
            // mlx_hook(data->mlx_wind, 6, 0, &mouse_move, data);
            // mlx_loop(data->mlx);
       }
    if((ft_strcmp("-j",  av[1]) == 0))
       {
            ft_draw(data, &julia);
            // mlx_key_hook(data->mlx_wind ,&key_press, data);
            // mlx_hook(data->mlx_wind, 2, 0, &mouse_press, data);
            // mlx_hook(data->mlx_wind, 4, 1L << 2, &mouse_move, data);
            // mlx_loop(data->mlx);
       }
  }
    
  //    else
  //       ft_putstr_fd("Invalid parametrs , it s seems that you need help, try --help "); 
  //  return (0);  
    
}