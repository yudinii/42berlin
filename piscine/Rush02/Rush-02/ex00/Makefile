# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroux <aroux@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/17 13:55:06 by aroux             #+#    #+#              #
#    Updated: 2024/02/18 15:49:23 by jalombar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc   
CFLAGS = -Wall -Werror -Wextra
SRCS = rush-02.c print_nbr.c check.c atoi.c
OBJS = $(SRCS:.c=.o)
HEADER = rush-02.h
NAME = rush-02

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)	

fclean: clean
	rm -f $(NAME)

re: fclean all
