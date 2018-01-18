# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/18 16:28:13 by wkhosa            #+#    #+#              #
#    Updated: 2018/01/18 16:40:54 by wkhosa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= fdf

CC 		= gcc

CFLAGS 	= -g -Wall -Werror -Wextra

LIBS 	= -lmlx -framework OpenGl -framework Appkit

INCLUDE = include

SRC 	= fdf.c					\
		  create_mlx_window.c	\
		  mlx_event_key.c		\
		  mlx_event_expose.c	\
		  get_point.c			\
		  convert_element_to_point.c\
		  map_point_to_pixel.c	\
		  make_object.c			\
		  rotation.c			\
		  ft_memdeldblptr.c		\
		  getdata.c				\
		  draw_line.c			\
		  scale_point.c			\
		  set_geometric_object.c\
		  put_pixel.c			\
		  draw_wire_frame.c		\

OBJ		= fdf.o					\
		  create_mlx_window.o	\
		  mlx_event_key.o		\
		  mlx_event_expose.o	\
		  get_point.o			\
		  convert_element_to_point.o\
		  map_point_to_pixel.o	\
		  make_object.o			\
		  rotation.o			\
		  ft_memdeldblptr.o		\
		  getdata.o				\
		  draw_line.o			\
		  scale_point.o			\
		  set_geometric_object.o\
		  put_pixel.o			\
		  draw_wire_frame.o		\


$(NAME)	: $(OBJ)

$(OBJ)	: $(INCLUDE)/fdf.h $(SRC)

fdf.o	: fdf.c

all:	$(NAME)
$(NAME):
		make -C libft
		$(CC) $(CFLAGS) -I $(INCLUDE) -c $(SRC)
		$(CC) $(CFLAGS) $(OBJ) -I libft/ $(LIBS) -L libft/ -lft -lm -o $(NAME)

clean:
	rm -rfv $(OBJ)

fclean: clean
	rm -rfv $(NAME)

re: fclean all
