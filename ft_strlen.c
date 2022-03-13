#include "fractol.h"
#include "ft_printf/ft_printf.h"

size_t  ft_strlen(char  *str)
{
        int i;

        i = 0;
        while(str[i])
            i++;
        return(i);
}