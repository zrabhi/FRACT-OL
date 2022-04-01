//  #include "ft_putstr_fd/ft_putstr_fd.h"
 #include "fractol.h"

int main(int ac, char **av)
 {
      t_fractol *data;
      
     data = (t_fractol *)malloc(sizeof(t_fractol));
     if(!data)
          return (-1);
     if(ac == 2)
     {
      
        // ft_mlx(data);
      if((ft_strcmp("-m",  av[1]) == 0))
      {
          // ft_mlx(data);
            ft_draw(data);
      }
        // else 
        //     ft_putstr_fd("Invalide parameters \n Try again");
     }
    else
        ft_putstr_fd("Invalid parametrs , it s seems that you need help, try --help ");
 }
