CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRCS := $(ls srcs/*|grep ".*\.c"|tr "\n" " "|sed 's/ $//')
OBJ := ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
libft.a: $(OBJ)
	ar -crs $@ $^

$(OBJ): %.o: %.c
	$(CC) -c $^ $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f libft.a

all: fclean libft.a
