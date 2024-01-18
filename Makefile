# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 01:58:16 by ayarmaya          #+#    #+#              #
#    Updated: 2024/01/18 03:41:18 by ayarmaya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC		=	ft_bzero \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint \
			ft_memcpy \
			ft_memmove \
			ft_strlen \
			ft_memset \
			ft_strlcpy \
			ft_strlcat \
			ft_toupper \
			ft_tolower \
			ft_strchr \
			ft_strrchr \
			ft_strncmp \
			ft_memchr \
			ft_memcmp \
			ft_strnstr \
			ft_atoi \
			ft_calloc \
			ft_strdup \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_split \
			ft_itoa \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_lstnew \
			ft_lstadd_front \
			ft_lstsize \
			ft_lstlast \
			ft_lstadd_back \
			ft_lstdelone \
			ft_lstclear \
			ft_lstiter \
			ft_lstmap \
			get_next_line \
			get_next_line_utils \
			ft_printf/ft_printf \
			ft_printf/ft_printint \
			ft_printf/ft_printhex \
			ft_printf/ft_printptr \
			ft_printf/ft_printstr \
			ft_printf/ft_printuint

SRCS		=	$(addsuffix .c, ${SRC})

OBJS_MAND	=	$(SRCS:.c=.o)

OBJS		=	$(OBJS_MAND)

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

RM		= 	rm -f

AR		= 	ar crs

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
