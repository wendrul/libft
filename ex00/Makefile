SRCS	=	srcs/ft_memset.c\
		srcs/ft_bzero.c\
		srcs/ft_memcpy.c\
		srcs/ft_memccpy.c\
		

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror -Iincludes/

CC	= gcc

RM	= rm -f

all:	${NAME}

${NAME}:	${OBJS}
		ar -crs ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

test:	all
	${CC} tests.c -L libft.a

.PHONY:	all clean fclean test re
