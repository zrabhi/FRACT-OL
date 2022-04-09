#ifndef FRACTOL_H
#define FRACTOL_H

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
#define Black 0x0000000
typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}		t_data;
 
// typedef void  (*str) (t_fractol *data);
typedef struct {
	// void  (*str) (t_fractol *data);
	void *mlx;
	void *mlx_wind;
	int x;
	int y;
	double julia_var_re;
	double julia_var_im;
	int iteration;
	int max_iteration;
	int color;
	int in_min;
	int in_max;
	int	out_max;
	int out_min;
	double x_scale;
	double y_scale;
	double x_center;
	double y_center;
	double newRE;
	double newIM;
	double oldRE;
	double oldIM;
	int value2;
	int value;
	double c_r;
	double c_i;
	t_data img;
} 			t_fractol;
// functions-----------------------.
void	ft_mlx(t_fractol *data);
void    mandelbrote(t_fractol *data);
void    julia(t_fractol *data);
void    julia_data(t_fractol *data);
void	burningship(t_fractol *data);
void	ft_putstr_fd(char *s);
int		ft_error(char **av,t_fractol *data);
void   	ft_my_put_pixel(t_fractol *data, int x, int y, int color);
int		ft_strcmp(const char *s1, const char *s2);
void	iteration_clc(t_fractol *data);
void    ft_draw(t_fractol *data, void (*f)(t_fractol *data));
int		mouse_move(int x, int y, t_fractol *data);
int		mouse_press(int key, int x, int y, t_fractol *data);
int		key_press(int keycode, t_fractol *data);
int		closed(t_fractol *data);
int		hundle_no_event(t_fractol *data);
void	ft_init(t_fractol *data);
void	reset_fract(t_fractol *data);
void	red(void);
void	purple(void);

#endif