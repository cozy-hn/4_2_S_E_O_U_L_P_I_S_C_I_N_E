CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
OBJT = do_op.o op_ft.o
SRC = do_op.c op_ft.c
NAME = do-op

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