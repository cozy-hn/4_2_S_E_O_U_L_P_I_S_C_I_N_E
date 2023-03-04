CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
OBJT = display_file.o
SRC = display_file.c
NAME = ft_display_file

all: $(NAME)

$(NAME): $(OBJT)
	$(CC) $(CFLAGS) $^ -o $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

clean:
	$(RMF) $(OBJT)

fclean: clean
	$(RMF) $(NAME)

re: fclean
	make