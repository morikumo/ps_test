SRCS		= 	./srcs/action_stack_a_b.c ./srcs/action_stack_a.c \
				./srcs/action_stack_b.c ./srcs/ft-manual-tri.c \
				./srcs/utils_action.c ./srcs/utils_libft.c ./srcs/push_swap.c \

OBJS			= $(SRCS:.c=.o)

NAME			= push_swap

CFLAGS			= -Wall -Wextra -Werror

RM				= rm -f

CC				= gcc

AR				= ar rcs

.c.o:
				@$(CC) $(CFLAGS) $(SRCS) -o $(<:.c=.o)

$(NAME):		$(OBJS)
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L.
				@echo -ne '\033[32m                            (0%)\r'
				@sleep 1
				@echo -ne '#####                      (33%)\r'
				@sleep 1
				@echo -ne '#############              (66%)\r'
				@sleep 1
				@echo -ne '#######################   (100%)\r'
				@echo -ne '\n'
				@echo "\033[33mC'est compilé !"

all:			$(NAME)

clean:
				@$(RM) $(OBJS)
				@echo -ne '\033[36m#######################   (100%)\r'
				@sleep 1
				@echo -ne '#############              (66%)\r'
				@sleep 1
				@echo -ne '#####                      (33%)\r'
				@sleep 1
				@echo -ne '                            (0%)\r'
				@echo -ne '\n'
				@echo "\033[33mC'est clean !"

fclean:			clean
				@$(RM) $(NAME) 
				@echo -ne '\033[34m#######################   (100%)\r'
				@sleep 1
				@echo -ne '#############              (66%)\r'
				@sleep 1
				@echo -ne '#####                      (33%)\r'
				@sleep 1
				@echo -ne '                            (0%)\r'
				@echo -ne '\n'
				@echo "\033[33mC'est fclean !"

re:				fclean all
				@echo -ne '\033[34m#######################   (100%)\r'
				@sleep 1
				@echo -ne '#############              (66%)\r'
				@sleep 1
				@echo -ne '#####                      (33%)\r'
				@sleep 1
				@echo -ne '                            (0%)\r'
				@echo -ne '\n'
				@echo "\033[33mC'est fclean !"
				@echo -ne '\033[32m                            (0%)\r'
				@sleep 1
				@echo -ne '#####                      (33%)\r'
				@sleep 1
				@echo -ne '#############              (66%)\r'
				@sleep 1
				@echo -ne '#######################   (100%)\r'
				@echo -ne '\n'
				@echo "\033[33mC'est compilé !"

.PHONY:			all clean fclean c.o re