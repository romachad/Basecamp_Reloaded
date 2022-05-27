CC := gcc
CFLAGS := -Wall -Wextra -Werror
SRC := ft_putstr.c ft_errors.c ft_display_file.c

ft_display_file: $(SRC)
	$(CC) -o $@ $^ $(CFLAGS)

all: fclean ft_display_file

fclean:	
	rm -f ft_display_file

clean:
	echo "Nothing to be cleaned!"
