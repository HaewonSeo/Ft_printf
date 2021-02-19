# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haseo <haseo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 00:04:16 by haseo             #+#    #+#              #
#    Updated: 2021/02/19 22:18:07 by haseo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS_LIST	=	ft_printf.c\
				get_spec.c\
				printf_ch.c\
				printf_str.c\
				printf_nbr.c

SRCS		= $(addprefix $(SRCS_DIR)/, $(SRCS_LIST))
OBJS		= $(SRCS:.c=.o)

LIBFT_DIR	= ./libft
INC_DIR		= ./includes
SRCS_DIR	= ./srcs

CC			= gcc
CFLAGS 		= -Wall -Wextra -Werror
AR			= ar
ARFLAGS		= rcs
RM			= rm -f

all:		libft $(NAME)

bonus:		all

libft:
			$(MAKE) -C $(LIBFT_DIR) bonus
			cp $(LIBFT_DIR)/libft.a $(NAME)

$(NAME):	$(OBJS)
			$(AR) $(ARFLAGS) $@ $^

%.o: %.c
			$(CC) -c $(CFLAGS) -o $@ $< -I$(INC_DIR)

clean:
			$(MAKE) -C $(LIBFT_DIR) clean
			$(RM) $(OBJS)

fclean:		clean
			$(MAKE) -C $(LIBFT_DIR) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	libft all clean fclean re bonus
