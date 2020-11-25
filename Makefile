# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/21 14:02:23 by rcreevey          #+#    #+#              #
#    Updated: 2020/11/21 16:11:52 by rcreevey         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCL = libft.h
SRCS = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c\
				ft_strlen.c ft_strlcat.c ft_strncmp.c ft_tolower.c ft_toupper.c\
				ft_strchr.c ft_strdup.c ft_strrchr.c ft_substr.c ft_calloc.c ft_memcpy.c\
				ft_atoi.c ft_strnstr.c ft_memccpy.c ft_split.c ft_itoa.c ft_strtrim.c\
				ft_strmapi.c ft_strjoin.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c\
				ft_putnbr_fd.c
CLN = rm -rf
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AO = $(SRCS:.c=.o)
NAME = libft.a
AR = ar rcs

$(NAME):	$(AO)
			$(AR) $(NAME) $(AO)

all:		$(NAME)

clean:
			$(CLN) $(AO)
fclean:
			$(CLN) $(AO) $(NAME)
re: fclean all

#so:
#	gcc -Wall -Wextra -Werror -c ${SRCS}
#	gcc -shared -o ${NAME:.a=.so} ${AO}
