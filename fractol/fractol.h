#ifndef FRACTOL_H
#define FRACTOL_H


#include "ft_printf/ft_printf.h"
#include <mlx.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>

// win-params------------------------------------------
#define WIDTH 1920
#define HIEGHT 1080
// colors-defined here------------------------------------------
#define INDIANRED 0xCD5C5C
#define RED 0xFF0000
#define WHITE 0xFFFFFF
#define GRAY 0x808080
#define ALICEBLUE 0x00F0F8FF
#define FIREBRICK 0XB22222
#define HOTPINCK 0XFF69B4

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}		t_data;

typedef struct {
	double comp;
	void *mlx;
	void *mlx_wind;
	int a;
	int b;
	int x;
	int y;
	int iteration;
	int max_iteration;
	int color;
	int in_min;
	int in_max;
	int	out_max;
	int out_min;
	double newRE;
	double newIM;
	double oldRE;
	double oldIM;
	float z_r;
	float z_i;
	float z;
	double c_r;
	double c_i;
	double zoom;
	double moveX;
	double moveY;
	t_data img;
} 			t_fractol;
// functions-----------------------.
// void ft_mlx(t_fractol **data);
void	ft_mlx(t_fractol *data);
void    mandelbrote(t_fractol *data);
void	ft_putstr_fd(char *s);
void	ft_error(int ac, char **av);
void   	ft_my_put_pixel(t_fractol *data, int x, int y, int color);
int		ft_strcmp(const char *s1, const char *s2);
void 	ft_map(t_fractol *data);
void	iteration_clc(t_fractol *data);
// void   	ft_mandelbrot(t_fractol *data);
double  ft_calculate(t_fractol *data);
void    julia(t_fractol *data);
void	mandelbrote(t_fractol *data);
void    ft_draw(t_fractol *data);

#endif