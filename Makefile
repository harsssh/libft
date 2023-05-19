SRC_DIR=.
SRC_NAME=$(wildcard ft_*.c)
OBJ_DIR=obj
OBJ=$(addprefix $(OBJ_DIR)/,$(SRC_NAME:.c=.o))
CFLAGS=-Wall -Wextra -Werror
LIB_NAME=libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) -o $@ -c $<

.PHONY: clean
clean:
	$(RM) $(OBJ)

.PHONY: fclean
fclean: clean
	$(RM) $(LIB_NAME)

.PHONY: re
re: fclean all
