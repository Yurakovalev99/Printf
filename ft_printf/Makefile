# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 18:10:24 by ysachiko          #+#    #+#              #
#    Updated: 2021/12/17 15:09:43 by ysachiko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

AR 	 = ar rcs

SRCS = \
	ft_printf.c \
	based.c \
	str.c \
	int.c \
	ft_printf_utils.c \

OBJS = $(patsubst %.c,%.o,$(SRCS))

D_FILES = $(patsubst %.c,%.d,$(SRCS))

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@ -MD

$(NAME): $(OBJS)
		$(AR) $(NAME) $?

all:	$(NAME)

clean:
		$(RM) $(OBJS)  $(D_FILES)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
