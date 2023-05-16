SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
INCLUDE_PATH=./
CFLAGS=-Wall -Wextra -Werror
LIB_NAME=libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ)
	ar rcs $@ $^

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDE_PATH)

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(LIB_NAME)

.PHONY: re
re: fclean all
