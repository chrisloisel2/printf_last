# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 13:32:03 by lchristo          #+#    #+#              #
#    Updated: 2020/06/11 00:31:48 by lchristo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC    =	ft_printf.c		ft_puthexa.c		ft_putstr.c		ft_get.c\
			ft_star.c		ft_atoi.c

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror -c

OPTION = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc libftprintf.a $(OBJ)
	ranlib libftprintf.a

gcc:
	gcc $(OPTION) $(SRC) main.c

clean:
	/bin/rm -f $(OBJ) $(OBJBONUS)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
