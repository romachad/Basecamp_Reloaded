CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := $(shell find srcs/ -type f -name "*.c")
OBJ := $(shell find srcs/ -type f -name "*.c"|sed 's/.*\///'|sed 's/\.c/\.o/')

libft.a: $(OBJ)
	ar -crs $@ $^

$(OBJ): %.o: $(SRCS)
	$(CC) -c $^ $(CFLAGS)

all: fclean libft.a

fclean:	clean
	rm -f libft.a

clean:
	rm -f $(OBJ)
