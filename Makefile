SRCS		= 	./srcs/action_stack_a_b.c ./srcs/action_stack_a.c \
				./srcs/action_stack_b.c ./srcs/ft-manual-tri.c \
				./srcs/utils_action.c ./srcs/utils_libft.c \

OBJS			= $(SRCS:.c=.o)

NAME			= push_swap

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

CC				= gcc

AR				= ar rcs

.c.o:
				@$(CC) $(CFLAGS) -c $(SRCS) -o $(<:.c=.o)

$(NAME):		$(OBJS)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.
				@echo "C'est compilé !"

all:			$(NAME)

clean:
				@$(RM) $(OBJS)
				@echo "C'est propre !"

fclean:			clean
				@$(RM) $(NAME) 
				@echo "C'est propre et compilé !"

re:				fclean all


.PHONY:			all clean fclean c.o re