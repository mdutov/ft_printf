# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maxim <maxim@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/01 13:33:58 by maxim             #+#    #+#              #
#    Updated: 2021/02/03 15:32:51 by maxim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

SRC=./finder/*.c ./general/*.c ./libft/ft*.c ./output/*.c ./receiver/*.c ./utils/*.c

OBJS=find*.o ft*.o output*.o rec*.o *.o

INCLUDES=./

all:$(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRC)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus: re

clean:
	@/bin/rm -f $(OBJS)

fclean: clean
	@/bin/rm -f $(NAME) ft_printf.h.gch

re: fclean all
