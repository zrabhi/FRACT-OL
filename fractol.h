/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 10:30:21 by zrabhi            #+#    #+#             */
/*   Updated: 2022/04/10 00:04:03 by zrabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <math.h>
# include <unistd.h>
# include <stdlib.h>

# define WIDTH 700
# define HIEGHT 700
# define BLACK 0x000000

typedef struct s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_fractol {
	void	*mlx;
	void	*mlx_wind;
	int		x;
	int		y;
	double	julia_var_re;
	double	julia_var_im;
	int		iteration;
	int		max_iteration;
	int		color;
	int		in_min;
	int		in_max;
	int		out_max;
	int		out_min;
	double	x_scale;
	double	y_scale;
	double	x_center;
	double	y_center;
	double	newre;
	double	newim;
	double	oldre;
	double	oldim;
	int		value2;
	int		value;
	double	c_r;
	double	c_i;
	int		color_code;
	t_data	img;
}	t_fractol;

void	mandelbrote(t_fractol *data);
void	julia(t_fractol *data);
void	julia_data(t_fractol *data);
void	burningship(t_fractol *data);
void	ft_putstr(char *s);
int		ft_check(char **av, t_fractol *data);
void	ft_my_put_pixel(t_fractol *data, int x, int y, int color);
int		ft_strcmp(const char *s1, const char *s2);
void	iteration_clc(t_fractol *data);
void	ft_draw(t_fractol *data, void (*f)(t_fractol *data));
int		mouse_move(int x, int y, t_fractol *data);
int		mouse_press(int key, int x, int y, t_fractol *data);
int		key_press(int keycode, t_fractol *data);
int		closed(t_fractol *data);
int		hundle_no_event(t_fractol *data);
void	ft_init(t_fractol *data);
void	reset_fract(t_fractol *data);
void	ft_get_coler(t_fractol *data);
void	red(void);
void	purple(void);

#endif
