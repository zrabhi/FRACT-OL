SRC =  	ft_strncmp.c   ft_map.c
OBJ = $(SRC:.c=.o)
printf = ft_printf
printfheader = &(ft_printf)
CC = gcc
GCC_FLAGS = -Wall -Wextra -Werror
HEADER = fractol.h 
AR = ar r
NAME = fractol.a

all: $(NAME)

$(NAME): $(OBJ) 
	$(AR) $(NAME) $(OBJ)
%.o: %.c 
	$(CC) $(GCC FLAGS) -c $<
clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re: fclean all 
