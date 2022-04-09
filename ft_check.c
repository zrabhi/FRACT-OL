/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:30:41 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/09 10:33:48 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	
	while (s1[i] && s2[i] && s1[i] == s2[i] )
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int   ft_check(char **av, t_fractol *data)
{
  

    if((ft_strcmp("-m",  av[1]) == 0))
       {
         data->value = 0;
         ft_draw(data, &mandelbrote);
         return(1);
        
       }
    else if ((ft_strcmp("-j",  av[1]) == 0))
       {    
            data->value = 1;
            julia_data(data); 
            ft_draw(data, &julia);
            return(1);
       }
      else if ((ft_strcmp("-b", av[1]) == 0))
      {
          data->value = 2;
          ft_draw(data, &burningship);
          return(1);
      }
      else if(ft_strcmp("-help", av[1]) == 0)
          {
            purple();
            ft_putstr("\n      it seems that you need little help \n      for mandelbrote use : ./fractol -m \n      for julia use : ./fractol -j \n      for burningship use : ./fractol -b \n\n");
            return (0);
          }
    return (0);
}
