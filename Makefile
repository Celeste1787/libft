# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/20 13:21:50 by adovleto          #+#    #+#              #
#    Updated: 2021/12/22 18:36:43 by adovleto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c		\
	ft_isascii.c	\
	ft_isalnum.c	\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isprint.c	\
	ft_split.c		\
	ft_strjoin.c	\
	ft_strdup.c	\
	ft_strlcpy.c	\
	ft_strlcat.c	\
	ft_strlen.c	\
	ft_strnstr.c	\
	ft_tolower.c	\
	ft_toupper.c	\
	ft_itoa.c		\
	ft_memcmp.c	\
	ft_memcpy.c	\
	ft_putstr_fd.c	\
	ft_putchar_fd.c	\
	ft_putnbr_fd.c	\
	ft_calloc.c	\
	ft_putendl_fd.c	\
	ft_strncmp.c	\
	ft_bzero.c		\
	ft_strchr.c	\
	ft_strrchr.c	\
	ft_memmove.c	\
	ft_memset.c	\
	ft_memchr.c	\
	ft_substr.c	\
	ft_strmapi.c	\
	ft_striteri.c	\
	ft_strtrim.c	\

BONUS = ft_lstnew.c	\
	ft_lstadd_front.c	\
	ft_lstsize.c	\
	ft_lstlast.c	\
	ft_lstadd_back.c	\
	ft_lstdelone.c	\
	ft_lstclear.c	\
	ft_lstiter.c	\
	ft_lstmap.c	\


OBJS := ${SRCS:.c=.o}

HEADER := libft.h

BONUSOBJS := ${BONUS:.c=.o}

CC = gcc

RM = rm -f

CFLAGS =  -Wall -Wextra -Werror

%.o:%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): ${OBJS}
	ar rc $(NAME) ${OBJS}

bonus: ${OBJS} ${BONUSOBJS}
	ar rc $(NAME) ${OBJS} ${BONUSOBJS}

clean: 
	${RM} ${OBJS} ${BONUSOBJS}

fclean: clean
	@${RM} $(NAME) 

re: fclean all

.PHONY: all clean fclean re bonus 
