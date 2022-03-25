#include "fractol.h"

void    ft_error(int ac, char **av)
{
  if(ac == 2)
  {
    if((ft_strcmp("-m",  av[1]) == 0))
            mandelbrote();
// ft_draw();
        // ft_test();
        // ft_mandelbrot();
    if(ft_strcmp("-j", av[1]) == 0)
        ft_putstr_fd("I'm still working on it!");
    if(ft_strcmp("--help", av[1]) == 0)
       {
        ft_putstr_fd("for mandelbrot set try : -m\n");
         ft_putstr_fd("for julia set try : -j");
       }
   
  }
    // else
    //     ft_putstr_fd("Invalid parametrs , it s seems that you need help, try --help ");        

}