NAME 		= cub3D

SRC 		=	src/cub.c				src/error.c				src/parsing.c\
				src/parsing_map.c		src/parsing_color.c		src/check_map.c\
				src/raycasting_start.c	src/raycasting_middle.c	src/raycasting_end.c\
				src/key_hook.c			src/key_hook_to.c		src/bonus_mini_map.c

OBJ 		= $(SRC:.c=.o)

HEADER 		= include/cub3d.h

CC 			= gcc

FLAGS 		= -Wall -Wextra -Werror

LIB 		= ./libmini/libmini.a

MLX 		= ./minilibx_macos/libmlx.a

FRAMEWORK	= -framework OpenGL -framework AppKit



all			:$(NAME)

$(NAME)		:$(OBJ) $(HEADER) $(LIB) $(MLX)
			$(CC) $(OBJ) $(LIB) $(MLX) $(FRAMEWORK) -o $(NAME)

%.o 		: %.c $(LIB) $(HEADER) $(MLX)
			$(CC) $(FLAGS) -Iinclude -c $< -o $@

$(LIB) 		:
			make -C ./libmini/

$(MLX) 		:
			make -C ./minilibx_macos/

clean 		:
			rm -f src/*.o
			make clean -C libmini/
			make clean -C minilibx_macos/

fclean 		: clean
			rm -f $(NAME)
			rm -f $(LIB)
			rm -f $(MLX)

re 			: fclean all

norm		:
			make norm -C ./libmini
			norminette $(SRC) $(HEADER)

.PHONY 		: all clean fclean norm re
