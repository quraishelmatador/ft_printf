# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 09:49:32 by ktayabal          #+#    #+#              #
#    Updated: 2024/12/06 09:49:34 by ktayabal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CCFLAGS = -Werror -Wextra -Wall

AR = ar rcs

SRCS = ft_printf.c \
	ft_putchar_re.c \
	ft_putnbr_re.c \
	ft_putstr_re.c \
	ft_put_lowhex_re.c \
	ft_put_uphex_re.c \
	ft_putnbr_unsigned_re.c \
	ft_putptr_re.c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CCFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re


