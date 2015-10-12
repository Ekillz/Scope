# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emammadz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/09/29 12:05:06 by emammadz          #+#    #+#              #
#    Updated: 2015/10/12 15:57:08 by emammadz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = scop

SRCC =	main.c\
		ft_putstr_fd.c\
		ft_opengl.c\

SRCO = $(SRCC:%.c=%.o)

FLAG = -Wall -Werror -Wextra

LIB = glfw/src/libglfw3.a -framework Cocoa -framework OpenGL -framework IOKit -framework CoreVideo

.PHONY: all fast clean fclean

all: scope

%.o: %.c
	@make -C glfw
	@make -C glfw/src
	@echo -n  $< :
	@gcc -o $@ -c $< $(FLAG)
	@echo

scope: $(SRCO)
	@gcc -o $(EXEC) $(FLAG) $(SRCO) $(LIB)

clean:
	@make clean -C glfw
	@make clean -C glfw/src
	@rm -f $(SRCO)

fclean: clean
	@rm $(EXEC)
re: fclean all
