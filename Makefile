# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 16:43:42 by mbiusing          #+#    #+#              #
#    Updated: 2025/11/28 16:47:58 by mbiusing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRC =		ft_printf.c

OBJ 		= $(SRC:.c=.o)

CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
AR 			= ar -rcs
RM 			= rm -f

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling..."
	@$(AR) $(NAME) $(OBJ)
	@echo "$(NAME) has just been birthed into existence along with the fellow object files"

bonus: all

clean:
	@$(RM) $(OBJ)
	@echo "$(OBJ) has just been wiped out"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) has also just been wiped out"

re: fclean all

# make test FILE=ft_strtrim

# test:
# 	@$(CC) $(CFLAGS) $(FILE).c $(NAME) -o test.out
# 	@echo "Made test for $(FILE).c..."
# 	@./test.out

.PHONY: clean fclean re all bonus #test
