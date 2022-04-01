GREEN=\033[32m
YELLOW=\033[33m
GRAY=\033[2;37m
CURSIVE=\033[3m
RED =\033[0;31m
BLUE =\033[0;34m



SRC =  main.c mandelbrot.c ft_my_put_pixel.c ft_strncmp.c ft_putstr_fd.c  julia.c ft_calculate.c ft_map.c ft_draw.c ft_window.c
OBJ = $(SRC:.c=.o)
MAIN = main.c
printf = ft_printf
printfheader = &(ft_printf)
CC = gcc
mlx_flags =  -lmlx -framework OpenGL -framework AppKit
GCC_FLAGS = -Wall -Wextra -Werror
HEADER = fractol.h 
AR = ar r
NAME = fractol.a
ECX = fractol

all: $(NAME)

# $(NAME): $(OBJ) 
# $(AR) $(NAME) $(OBJ)
%.o: %.c 
	@$(CC) $(GCC_FLAGS)   -c $<  
$(NAME) : $(OBJ)
	@$(CC) $(GCC_FLAGS) $(mlx_flags) -o $(ECX) $(OBJ)
	@echo ""
	@echo " $(BLUE)Wᴇʟᴄᴏᴍᴇ ᴛᴏ ᴍʏ$(NONE)\n"
	@sleep 0.8
	@echo "		$(RED)▒█▀▀▀ ▒█▀▀█ ░█▀▀█ ▒█▀▀█ ▀▀█▀▀ ▒█▀▀▀█ ▒█░░░$(NONE)	"
	@sleep 0.8
	@echo "		$(RED)▒█▀▀▀ ▒█▄▄▀ ▒█▄▄█ ▒█░░░ ░▒█░░ ▒█░░▒█ ▒█░░░$(NONE)	" 
	@sleep 0.8
	@echo "		$(RED)▒█░░░ ▒█░▒█ ▒█░▒█ ▒█▄▄█ ░▒█░░ ▒█▄▄▄█ ▒█▄▄█$(NONE)	\n"
	@sleep 1
	@echo "                                            $(RED)𝔸𝕣𝕖 𝕪𝕠𝕦 𝕣𝕖𝕒𝕕𝕪❕$(NONE)"
	@sleep 1
	@echo ""
	@echo " 		$(GRAY)To use this program, simply start the fractol file and put the name of the fractol you want to see!$(NONE)\n"
	@echo " 		$(GRAY)How to use:$(NONE)\n"
	@sleep 0.8
	@echo " 			$(RED)> ./fractol mandelbrot$(NONE)"
	@echo " 			$(RED)> ./fractol julia$(NONE)"
	@echo " 			$(RED)> ./fractol burningship$(NONE)\n"
	 
clean:
	@rm -f $(OBJ)
fclean:
	@rm -f $(OBJ) $(NAME)
re: fclean all 
