#ifndef FRACTOL_H
#define FRACTOL_H


#include "ft_printf/ft_printf.h"
#include <mlx.h>
#include <math.h>

// win_params---------------------.
#define WIDTH 1920
#define HIEGHT 1080
typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;
typedef struct {
	// void	*img;
	// char	*addr;
	// int		bits_per_pixel;
	// int		line_length;
	// int		endian;
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
} t_fractol;
// functions-----------------------.
void   ft_my_put_pixel(t_data *data, int x, int y, int color);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t  ft_strlen(char  *str);
int ft_map(t_fractol *data);
void    ft_mandelbrote(t_fractol *data);
void    ft_draw(t_fractol *data);

#endif