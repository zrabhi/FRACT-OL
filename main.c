 #include "ft_printf/ft_printf.h"
 #include "fractol.h"

int main(int ac, char **av)
 {
     if(ac == 2)
     {
        if(ft_strncmp("julia", av[1], ft_strlen("julia")))
           ft_printf("Julia");
        if(ft_strncmp("mandelbort", av[1], ft_strlen("mandelbort")))
            ft_printf("Mandelbrote");
        else 
            ft_printf("Invalide parameters \n Try again");
     }
     ft_printf("INVALIDE PARAMS\n");
 }
