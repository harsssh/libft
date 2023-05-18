SRC=$(wildcard ft_*.c)
OBJ=$(SRC:.c=.o)
CFLAGS=-Wall -Wextra -Werror
LIB_NAME=libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ)
	ar rcs $@ $^

.c.o:
	$(CC) -c $<

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(LIB_NAME)

.PHONY: re
re: fclean all
