# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmayne-p <cmayne-p@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/18 16:18:25 by cmayne-p          #+#    #+#              #
#    Updated: 2025/02/20 10:12:35 by cmayne-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library
NAME	=	libft.a

# Compiler and flags
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -MMD -MP -I$(INC_DIR) -I$(GNL_DIR)
DEBUG	=	-g -fsanitize=address

# Directories
OBJ_DIR		=	obj
SRC_DIR		=	src
INC_DIR		=	inc
GNL_DIR		=	gnl
PRINTF_DIR	=	printf

# Headers
INCLUDES	=	$(INC_DIR)/libft.h

# Source files
LIBFT_SRCS	=	ft_isspace.c \
				ft_isupper.c \
				ft_islower.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_numlen.c \
				ft_uitoa_base.c \
				ft_ultoa_base.c

LIST_SRCS	=	ft_lstnew_bonus.c \
				ft_lstadd_front_bonus.c \
				ft_lstsize_bonus.c \
				ft_lstlast_bonus.c \
				ft_lstadd_back_bonus.c \
				ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c \
				ft_lstiter_bonus.c \
				ft_lstmap_bonus.c

GNL_SRCS	=	get_next_line.c \
				get_next_line_utils.c

GNL_MULT_FILES_SRCS	=	get_next_line_bonus.c \
						get_next_line_bonus.c

# Objects
LIBFT_OBJS	=	$(addprefix $(OBJ_DIR)/, $(LIBFT_SRCS:.c=.o))
LIST_OBJS	=	$(addprefix $(OBJ_DIR)/, $(LIST_SRCS:.c=.o))
GNL_OBJS	=	$(addprefix $(OBJ_DIR)/, $(GNL_SRCS:.c=.o))
GNL_MULT_FILES_OBJS	=	$(addprefix $(OBJ_DIR)/, $(GNL_MULT_FILES_SRCS:.c=.o))
ALL_OBJS	=	$(LIBFT_OBJS) $(LIST_OBJS) $(GNL_OBJS) $(GNL_MULT_FILES_OBJS)

# Colors
GREEN		=	\033[0;32m
GREEN_BOLD	=	\033[1;32m
RED			=	\033[0;31m
YELLOW		=	\033[0;33m
BLUE		=	\033[0;34m
CYAN		=	\033[0;36m
PURPLE		=	\033[0;35m
RESET		=	\033[0m

ifneq ($(filter debug debug_bonus, $(MAKECMDGOALS)),)
	COLOR	=	$(YELLOW)
else
	COLOR	=	$(GREEN)
endif

# Targets
all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)📂 Created directory: $(OBJ_DIR) $(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c Makefile | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR)Compiled: $< $(RESET)"

$(OBJ_DIR)/%.o: $(GNL_DIR)/%.c Makefile | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOR)Compiled: $< $(RESET)"

$(NAME): $(LIBFT_OBJS) $(GNL_OBJS)
	@ar rcs $(NAME) $(LIBFT_OBJS) $(GNL_OBJS)
	@echo "$(GREEN_BOLD)Library built: $(NAME) $(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f .bonus
	@echo "$(CYAN)🧹 Cleaned object files 🧹 $(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)🧹 Cleaned library 🧹 $(RESET)"

re: fclean all

bonus: .bonus

.bonus: $(LIST_OBJS)
	@ar rcs $(NAME) $(LIST_OBJS)
	@touch $@
	@echo "$(GREEN_BOLD)Library built: $(NAME) $(RESET)"

debug: CFLAGS += $(DEBUG)
debug: re

debug_bonus: CFLAGS += $(DEBUG)
debug_bonus: fclean bonus

norm:
	norminette $(LIBFT_SRCS) $(LIST_SRCS) $(INCLUDES)

.PHONY: all clean fclean re bonus debug debug_bonus norm

# Include generated dependency files
-include $(ALL_OBJS:.o=.d)
