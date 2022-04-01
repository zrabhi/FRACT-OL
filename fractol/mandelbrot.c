#include "fractol.h"
#include <mlx.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

 void    iteration_calc(t_fractol *data)
{
   data->iteration=0;
          while( (data->iteration < data->max_iteration))
      { 
            data->oldRE = data->newRE;
            data->oldIM =data->newIM;
            data->newRE = data->oldRE * data->oldRE - data->oldIM * data->oldIM + data->c_r;
            data->newIM = 2 * data->oldRE * data->oldIM + data->c_i;
            data->iteration++;
       if(((data->newRE * data->newRE) + (data->newIM * data->newIM) > 4)) break;
      }
}
void  mandelbrote(t_fractol *data)
{
    data->c_r = (data->x -WIDTH / 2.0) * (4.0 / WIDTH);
    data->c_i = (data->y - HIEGHT / 2.0) * (4.0 / HIEGHT);
    data->newRE = data->newIM = data->oldRE = data->oldIM = 0;
    iteration_calc(data);
}



    
    