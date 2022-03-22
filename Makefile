CC=gcc
CFLAGS=-Wall -Werror -Wextra -lbsd
OBJECTS=$(patsubst %.c,%.o,$(wildcard *.c))
NAME=mylib

all: $(NAME)

#%.o: %.c %.h
#	$(CC) $(CFLAGS) -c $^

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $^

clean:
	rm *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
