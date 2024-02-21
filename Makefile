# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmontes <fmontes@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 16:36:38 by fmontes           #+#    #+#              #
#    Updated: 2024/02/21 16:49:49 by fmontes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)
PUSH_SWAP = push_swap
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap.a

all: $(NAME) $(PUSH_SWAP)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(PUSH_SWAP):
	$(CC) $(CFLAGS) -o $(PUSH_SWAP) $(SRCS) $(NAME)

clean:
	$(RM) $(OBJS) $(SERVER) $(PUSH_SWAP)

fclean: clean
	$(RM) $(NAME) $(PUSH_SWAP)

re: fclean all
