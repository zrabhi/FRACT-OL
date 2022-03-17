SRC =  ft_mandelbrot.c ft_my_put_pixel.c ft_strncmp.c ft_putstr_fd.c ft_errror.c ft_julia.c ft_calculate.c
OBJ = $(SRC:.c=.o)
MAIN = main.c
printf = ft_printf
printfheader = &(ft_printf)
CC = gcc
mlx_flags = -lmlx -framework OpenGL -framework AppKit
GCC_FLAGS = -Wall -Wextra -Werror
HEADER = fractol.h 
AR = ar r
NAME = fractol.a

all: $(NAME)

$(NAME): $(OBJ) 
	$(AR) $(NAME) $(OBJ) 
%.o: %.c 
	$(CC) $(mlx_flags) -c $< 
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re: fclean all 
