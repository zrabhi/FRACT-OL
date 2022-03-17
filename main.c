//  #include "ft_putstr_fd/ft_putstr_fd.h"
 #include "fractol.h"

int main(int ac, char **av)
 {
     t_fractol data;
     if(ac == 2)
     {
       ft_error(ac, av);
        // else 
        //     ft_putstr_fd("Invalide parameters \n Try again");
     }
    else
        ft_putstr_fd("Invalid parametrs , it s seems that you need help, try --help ");
 }
