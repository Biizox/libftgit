# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acharvoz <acharvoz@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 16:37:33 by acharvoz          #+#    #+#              #
#    Updated: 2024/06/11 00:32:08 by acharvoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_strlen.c\
			ft_strlcat.c\
			ft_strncmp.c\
			ft_tolower.c\
			ft_toupper.c\
			ft_bzero.c\
			ft_memset.c\
			ft_atoi.c\
			ft_memcpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memmove.c\
			ft_strlcpy.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strnstr.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_putchar_fd.c\
			ft_itoa.c\
			ft_strtrim.c\
			ft_strjoin.c\
			ft_substr.c\
			ft_striteri.c\
			ft_strmapi.c\
			ft_split.c\
			ft_putchar.c\

SRCSB = 	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c\
			ft_lstiter.c\

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
bonus: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)
all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
