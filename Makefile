# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 12:10:50 by vclarita          #+#    #+#              #
#    Updated: 2020/11/15 16:41:27 by vclarita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAG = -Wall -Wextra -Werror

INC = libft.h

SRC = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c			\
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c		\
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c		\
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c	\
		ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c			\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c			\
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
		
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c		\
			ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c			\
			ft_lstdelone.c													\

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

OFILE = $(SRC:.c=.o)

RM = rm -f

AR = ar rcs

$(NAME):$(OFILE) $(INC)
	$(AR) $(NAME) $(OFILE)
all: $(NAME)

clean: 
	$(RM) $(BONUS_OBJS) ${OFILE}

fclean: clean 
	$(RM) $(NAME)

re: fclean all
%.o:%.c 
	$(CC) $(FLAG) -c $<
bonus: $(NAME) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)
.PHONY: all clean fclean re fclean