# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 20:33:59 by trofidal          #+#    #+#              #
#    Updated: 2021/02/09 20:33:59 by trofidal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

LDFLAGS=-L

LDLIBS=-lft

SRC =	ft_atoi.c				\
		ft_bzero.c				\
		ft_calloc.c				\
		ft_isalnum.c			\
		ft_isalpha.c			\
		ft_isascii.c			\
		ft_isdigit.c			\
		ft_isprint.c			\
		ft_itoa.c				\
		ft_memalloc.c			\
		ft_memccpy.c			\
		ft_memchr.c				\
		ft_memcmp.c				\
		ft_memcpy.c				\
		ft_memdel.c				\
		ft_memmove.c			\
		ft_memset.c				\
		ft_putchar_fd.c			\
		ft_putendl_fd.c			\
		ft_putnbr_fd.c			\
		ft_putstr_fd.c			\
		ft_split.c				\
		ft_strcat.c				\
		ft_strchr.c				\
		ft_strclr.c				\
		ft_strcmp.c				\
		ft_strcpy.c				\
		ft_strdel.c				\
		ft_strdup.c				\
		ft_strequ.c				\
		ft_striter.c			\
		ft_striteri.c			\
		ft_strjoin.c			\
		ft_strlcat.c			\
		ft_strlcpy.c			\
		ft_strlen.c				\
		ft_strmapi.c			\
		ft_strncat.c			\
		ft_strncmp.c			\
		ft_strncpy.c			\
		ft_strnequ.c			\
		ft_strnew.c				\
		ft_strnstr.c			\
		ft_strrchr.c			\
		ft_strstr.c				\
		ft_strtrim.c			\
		ft_substr.c				\
		ft_tolower.c			\
		ft_toupper.c			\
		ft_strndup.c			\
		ft_atof.c				\
		ft_itoa_base.c			\
		ft_itoa_unsigned.c		\
		ft_itoa_pointer.c		\
		ft_charcmp.c			\
		ft_find_char.c			\
		ft_putchar.c			\
		ft_putnbr.c				\
		ft_putnbr_base.c		\
		ft_putnbr_float.c		\
		ft_putstr.c				\
		ft_recursive_power.c	\
		ft_strclrnbr.c			\
		ft_strclrstr.c			\
		ft_strmap.c				


BONUS = ft_lstsize.c		\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstlast.c		\
		ft_lstnew.c			\
		ft_lstmap.c			\

OBJ = $(SRC:.c=.o)

BNS = $(BONUS:.c=.o)

OBJBONUS = $(OBJ) $(BNS)

INC = ./inc/

$(NAME): $(OBJ)
				ar -rcs $(NAME) $(OBJ)

%.o: %.c
				$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

bonus: $(OBJBONUS)
				ar -rcs $(NAME) $(OBJBONUS)

clean:
				$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
				$(RM) $(NAME)

re: fclean all

.PHONY: clean clean
