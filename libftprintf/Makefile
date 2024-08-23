# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujkim <yujkim@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/24 16:42:31 by yujkim            #+#    #+#              #
#    Updated: 2024/04/24 17:00:17 by yujkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_printf_char.c ft_printf_dec.c ft_printf_hex.c ft_printf_str.c ft_printf_unsigned_dec.c ft_printf_ptr.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
HEADER = libftprintf.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS) 

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
