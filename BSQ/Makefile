# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsebasti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 16:42:44 by rsebasti          #+#    #+#              #
#    Updated: 2024/08/05 14:48:13 by rsebasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = bsq
DEBUG_NAME = bsq_debug
DEBUG_FLAGS = -ggdb

MY_SOURCES =	main.c \
				map.c square.c \
				utils/ft_atoi.c utils/ft_split.c utils/ft_strings.c utils/read_file.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

debug: CFLAGS += $(DEBUG_FLAGS)
debug: $(DEBUG_NAME)

$(DEBUG_NAME): $(MY_OBJECTS)
	$(CC) $(CFLAGS) -o $(DEBUG_NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME) $(DEBUG_NAME)

re: fclean all

