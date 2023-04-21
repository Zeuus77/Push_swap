NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = push_swap.c ft_split.c RULE.C rule1.c rule3.c utils.c utils2.c
OBJS = push_swap.o ft_split.o RULE.o rule1.o rule3.o utils.o utils.o

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f *.o $(NAME) 
fclean:
	rm -f *.o $(NAME) 

re:	fclean all bonus

.PHONY: all clean fclean re
