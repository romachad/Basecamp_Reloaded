CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC := ft_putstr.c ft_errors.c ft_display_file.c
#OBJ := $(shell find srcs/ -type f -name "*.c"|sed 's/.*\///'|sed 's/\.c/\.o/')

ft_display_file: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)

#$(OBJ): %.o: $(SRCS)
#	$(CC) -c $^ $(CFLAGS)

all: fclean ft_display_file

fclean:	
	rm -f ft_display_file

clean:
	rm -f ft_display_file
