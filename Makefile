# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lchristo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 13:32:03 by lchristo          #+#    #+#              #
#    Updated: 2020/05/03 21:05:04 by lchristo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC    = 	ft_point.c		ft_puthexa.c		ft_shorter.c\
		ft_atoi.c		ft_printf.c		ft_puthexmaj.c		ft_strjoin.c\
		ft_isalnum.c		ft_put_unsigned_nbr.c	ft_putnbr.c		ft_strlen.c\
		ft_isdigit.c		ft_putchar.c		ft_putstr.c		ft_zerochi.c\
		ft_flag.c		ft_clean.c		ft_cpt.c

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
