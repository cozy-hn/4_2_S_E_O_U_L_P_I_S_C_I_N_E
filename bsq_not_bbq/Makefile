CC = cc
CFLAGS = -Wall -Wextra -Werror
RMF = rm -f
INCDIR = /includes
SRCDIR = srcs
SRCS = srcs/bsq.c srcs/create_dp.c srcs/find_max_pos.c srcs/ft_atoi.c srcs/ft_puterr.c srcs/ft_strcpy_term.c srcs/ft_strdup_term.c srcs/ft_strlen.c srcs/ft_strlen_term.c srcs/get_line_size.c srcs/get_map_info.c srcs/init_pos.c srcs/is_in_square.c srcs/is_newline.c srcs/is_numeric.c srcs/is_whitespace.c srcs/map_error.c srcs/math.c srcs/print_if_buffer_end.c srcs/print_max_square.c srcs/save_max_pos.c srcs/set_separator_tester.c srcs/skip_first_line.c
OBJS = $(SRCS:%.c=%.o)
NAME = bsq
SIM = standard_input_map

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

srcs/bsq.o : srcs/bsq.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/create_dp.o : srcs/create_dp.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/find_max_pos.o : srcs/find_max_pos.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_atoi.o : srcs/ft_atoi.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_puterr.o : srcs/ft_puterr.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_strcpy_term.o : srcs/ft_strcpy_term.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_strdup_term.o : srcs/ft_strdup_term.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_strlen.o : srcs/ft_strlen.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/ft_strlen_term.o : srcs/ft_strlen_term.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/get_line_size.o : srcs/get_line_size.c includes/buffer.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/get_map_info.o : srcs/get_map_info.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/init_pos.o : srcs/init_pos.c includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/is_in_square.o : srcs/is_in_square.c includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/is_newline.o : srcs/is_newline.c includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/is_numeric.o : srcs/is_numeric.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/is_whitespace.o : srcs/is_whitespace.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/map_error.o : srcs/map_error.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/math.o : srcs/math.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/print_if_buffer_end.o : srcs/print_if_buffer_end.c includes/buffer.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/print_max_square.o : srcs/print_max_square.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/save_max_pos.o : srcs/save_max_pos.c includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/set_separator_tester.o : srcs/set_separator_tester.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

srcs/skip_first_line.o : srcs/skip_first_line.c includes/bsq.h includes/buffer.h includes/pos.h
	$(CC) $(CFLAGS) -I$(INCDIR) -c $<
	mv $(notdir $(<:.c=.o)) ./srcs

clean:
	$(RMF) $(OBJS) 

fclean: clean
	$(RMF) $(NAME) $(SIM)

re : fclean all
