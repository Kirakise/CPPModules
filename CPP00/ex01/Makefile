NAME = phone
CC = clang++
FLAGS = -Wall -Wextra -Werror -g
SRCS = *.cpp

all:
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm *.o
fclean: clean
	rm $(NAME)
re: fclean all
