# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fischer <fischer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 21:53:13 by fischer           #+#    #+#              #
#    Updated: 2023/08/20 22:07:41 by fischer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c
OBJS = ${SRCS:.c=.o}

CC = gcc
RM = /bin/rm -f
CFLAGS = -Wall -Wextra -Werror -L.

CL = ar -rc
RL = ar -s

${NAME}:	${OBJS}
	${CL} ${NAME} ${OBJS}
	${RL} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all