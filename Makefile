CC=gcc
CFLAGS=-Wall -Werror -Wextra
SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c
NAME=libft.a

all: $(NAME)

#%.o: %.c %.h
#	$(CC) $(CFLAGS) -c $^
$(NAME): objects all_func.h
	ar rcs libmylib.a *.o

objects: $(SRC) all_func.h
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
