CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
OBJT = cat.o
SRC = cat.c
NAME = ft_hexdump

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