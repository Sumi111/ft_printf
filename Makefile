# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sfathima <sfathima@student.42abudhabi      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:42:50 by sfathima          #+#    #+#              #
#    Updated: 2021/11/15 11:13:55 by sfathima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
cc		= gcc
CFLAG	= -Wall -Werror -Wextra
RM		= rm -f
AR		= ar
ARFLAG	= crs
SRC		= ft_printf.c print_utlis_1.c print_utlis_2.c print_utlis_3.c 

OBJS	= $(SRC:.c=.o)

all		: $(NAME)

bonus	: all

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean	:
	$(RM) $(RMFLAG) $(OBJS)
fclean	: clean
	$(RM) $(RMFLAG) $(NAME)

re		: fclean all

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

 .PHONY : all clean fclean re
