CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RMF = rm -f
OBJT = ./srcs/ft_putchar.o ./srcs/ft_putstr.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o ./srcs/ft_swap.o
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEAD = ./includes
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJT)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -I$(HEAD) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

clean:
	$(RMF) $(OBJT)

fclean: clean
	$(RMF) $(NAME)

re: fclean
	make

