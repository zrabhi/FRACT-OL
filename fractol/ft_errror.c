#include "fractol.h"

void    ft_error(int ac, char **av)
{
  t_fractol *data;
  data = (t_fractol *)malloc(sizeof(t_fractol));
  if(!data)
      return ;
  if(ac == 2)
  {
    if((ft_strcmp("-m",  av[1]) == 0))
       {
            ft_draw(data, &mandelbrote);
       }
    if((ft_strcmp("-j",  av[1]) == 0))
       {
             ft_draw(data, &julia);
       }
     if(ft_strcmp("--help", av[1]) == 0)
      {
         ft_putstr_fd("for mandelbrot set try : -m\n");
         ft_putstr_fd("for julia set try : -j");
      }

  }
    
  //   if(ft_strcmp("-j", av[1]) == 0)
  //   {
  //         ft_draw(data);
  //         return 1;
  //   }
  // }
  //    else
  //       ft_putstr_fd("Invalid parametrs , it s seems that you need help, try --help "); 
  //  return (0);  
    
}