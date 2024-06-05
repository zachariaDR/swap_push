# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/12 07:40:22 by ael-khni          #+#    #+#              #
#    Updated: 2024/06/03 23:58:55 by zadriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
	
CC			= cc
FLAGS		= -Wall -Wextra -Werror -fsanitize -g3
RM			= rm -rf

STACK		= $(addprefix stack/, create_new_elem free_stack pop_elem poop_elem \
			  push_elem push_elem_bottom stack_init is_elem_exist ft_print_stack \
			  get_max get_min get_elem_index half is_empty is_sorted)
OPERATION	= $(addprefix operations/, pa_push_a pb_push_b ra_rotate_a \
				rb_rotate_b rr_ra_rb rra_reverse_rotate_a \
				rrb_reverse_rotate_b rrr_rra_rrb sa_swap_a sb_swap_b \
				ss_sa_sb ra_n rb_n rr_n rra_n rrb_n rrr_n)
CHECKS		= $(addprefix checks/, get_input is_int is_all_integer is_duplicates size_of_args\
			  	is_greater_than_int put_error put_args_into_one_list)
UTILS		= $(addprefix utils/, ft_swap ft_atoi ft_strcmp ft_putstr ft_substr ft_split \
				ft_strlen ft_strdup)
ALGO		= $(addprefix algorithm/, turk_sort sort_three \
				cost_to_top cost_to_top_up cost_to_top_down do_chep_moves find_cheap_nb \
			   	make_elem_top get_position_a get_position_b)
FILES		= $(addprefix srcs/, push_swap $(STACK) $(OPERATION) $(UTILS) $(CHECKS) $(ALGO))

SRC			= $(FILES:=.c)
OBJ			= $(FILES:=.o)
HEADER		= $(addprefix includes/, push_swap.h)
INCLUDES	= -I includes

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

#Debug 
ifeq ($(DEBUG), 1)
   OPTS = -g
endif



all: $(NAME)

$(NAME):  $(OBJ) $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@ $(CC) $(OBJ) $(INCLUDES) $(OPTS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

%.o: %.c $(HEADER)
	@printf "$(CURSIVE)$(GRAY) 	- Making object file $(notdir $@) from source file $(notdir $<) ... $(RESET)\n"
	@ $(CC) -Wall -Wextra -Werror $(OPTS) $(INCLUDES) -c $< -o $@

norm:
	@printf "$(CURSIVE)$(GRAY)"
	@norminette
	@printf "$(RESET)"

test: all
	@printf "\n$(YELLOW)	- Testing $(ARG) random numbers.. $(RESET)\n\n"
	@sh testing/testing.sh $(ARG) 

bonus:
	@$(MAKE) -C checker_bonus
clean_bonus:
	@$(MAKE) clean -C checker_bonus
fclean_bonus:
	@$(MAKE) fclean -C checker_bonus
re_bonus:
	@$(MAKE) re -C checker_bonus

clean:
	@ $(RM) $(OBJ)
	@printf "$(CURSIVE)$(GRAY)	- Removing object files ... $(RESET)\n"
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean: clean
	@ $(RM) $(NAME)
	@printf "$(CURSIVE)$(GRAY)	- Removing $(NAME)... $(RESET)\n"
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re bonus clean_bonus fclean_bonus test norm
