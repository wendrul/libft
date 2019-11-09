# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ede-thom <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 20:31:38 by ede-thom          #+#    #+#              #
#    Updated: 2019/11/09 12:03:05 by ede-thom         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memccpy.c\
			ft_memmove.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strlen.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strnstr.c\
			ft_atoi.c\
			ft_calloc.c\
			ft_strdup.c\
		
SRCS	+=	more/ft_atoi_base.c\
			more/ft_indexof.c\
			more/ft_iswhitespace.c\
			more/ft_max.c

OBJS	=	${SRCS:.c=.o}

NAME	=	libft.a


RED		=	\033[0;31m
GREEN	= 	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
MAGENTA	=	\033[0;35m
CYAN	=	\033[0;36m
RESET	=	\033[0m


CFLAGS	=	-Wall -Wextra -Werror

CC	=		gcc

RM	=		rm -f

all:		${NAME}

${NAME}:	${OBJS}
			@printf "$(CYAN)Done creating object files!$(RESET)\n"
			@ar -crs ${NAME} ${OBJS}
			@printf "$(CYAN)Created $(GREEN)$(NAME)$(CYAN)!! $(RESET)\n"

%.o:		%.c libft.h
			@${CC} ${CFLAGS} -c $< -o $@
			@printf "$(CYAN)Compiling $(MAGENTA)$<$(RESET)\r"
clean: 
			@${RM} ${OBJS}
			@printf "$(CYAN)TIDY UP $(RED)MOTHERFUCKER$(RESET)\n"

fclean:		clean
			@${RM} ${NAME}
			@printf "$(CYAN)Everything is $(RED)c$(YELLOW)l$(GREEN)e$(CYAN)a$(MAGENTA)n$(RESET)\n"

re:			fclean all

test:		all
			${CC} tests.c -L libft.a

.PHONY:	all clean fclean test re
