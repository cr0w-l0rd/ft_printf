# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 16:43:42 by mbiusing          #+#    #+#              #
#    Updated: 2025/12/05 02:25:30 by mbiusing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRC_DIR		= srcs
SRC			= $(SRC_DIR)/ft_printf.c \
			  $(SRC_DIR)/ft_base.c \
			  $(SRC_DIR)/ft_char_str.c \
			  $(SRC_DIR)/ft_num.c

OBJS_DIR	= objs
OBJ			= $(SRC:$(SRC_DIR)/%.c=$(OBJS_DIR)/%.o)

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar -rcs
RM			= rm -rf

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

# -p flag : creates the folder only if it doesn’t exist

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(NAME) and its object files has just came into the picture, now holding hands in unison alongside libft.a and its entourage."

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(OBJ) has just been wiped out."

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "$(NAME) has also just been wiped out."

re: fclean all

test:
	$(CC) $(CFLAGS) $(FILE).c main.c $(NAME) -o test.out
	@echo "Built test: ./test.out"

.PHONY: all clean fclean re test
