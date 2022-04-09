/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:37:51 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/09 10:40:30 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(int ac, char **av)
 {
	t_fractol *data;

	data = (t_fractol *)malloc(sizeof(t_fractol));
	if (!data)
      return (-1);
	ft_init(data);
	if (ac == 2)  
	{
		if (ft_check(av, data) == 1)
      	{
			mlx_key_hook(data->mlx_wind, &key_press, data);
			mlx_hook(data->mlx_wind, 53, 0, &closed, data);
			mlx_hook(data->mlx_wind, 4, 0, &mouse_press, data);
			mlx_hook(data->mlx_wind, 6, 0, &mouse_move, data);
			mlx_loop_hook(data->mlx, &hundle_no_event, data);
			mlx_loop(data->mlx);
		}
	}
	 else 
	{
		red();
		ft_putstr("\n      Invalid parametrs , it s seems that you need help, try -help \n\n"); 
	}
}
