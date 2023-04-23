NAME = push_swap
CC = gcc
#CFLAGS = -Wall -Wextra -Werror
SRCS = ft_split.c help.c push_swap.c RULE.c Rule1.c rule3.c sorting.c sorting2.c utils.c utils2.c

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
clean:
	rm -f *.o $(NAME) 
fclean:
	rm -f *.o $(NAME) 

re:	fclean all bonus

.PHONY: all clean fclean re
