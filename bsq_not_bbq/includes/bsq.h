
#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "pos.h"
# include "buffer.h"

# include <stdio.h> //// need to remove !!!

# define STDIN_SAVE "standard_input_map"

char		*ft_strdup_term(char *src, char *charset);
char		*ft_strlen_term(char *src, char *charset);
int			ft_strlen(char *src);
char		*ft_strcpy_term(char *dest, char *src, char *charset);
long long	ft_atol(char *str);
int			min_dou(int a, int b);
int			max_dou(int a, int b);
int			min_tri(int a, int b, int c);
void		get_map_info(char *file_name, char **marks, long long *row_size);
void		map_error(void);
int			get_line_size(char *file_name);
int			*create_dp(char *file_name, t_pos *max_pos);
int			is_newline(int x_init, char target, t_pos *dp_idx);
int			is_in_square(t_pos cur, t_pos max_pos);
int			skip_first_line(char *buffer);
void		save_max_pos(t_pos *max_pos, int cur_value, t_pos cur);
int			read_first_line(int fd, char *buffer, int *idx, t_pos *dp_idx);
void		read_next_if_buffer_end(int fd, int *idx, char *buffer, int *bytes);
long long	set_max_pos_dp(int fd, int *dp, char *marks, t_pos *max);
t_pos		find_max_pos(char *file_name, char *marks, long long row_num);
void		print_if_buffer_end(int fd, int *idx, char *buffer, int *bytes);
void		print_max_square(char *file_name, t_pos max_pos, char sqare);
void		not_existing_map(void);
void		dp_init_pos(t_pos *pos);
void		max_init_pos(t_pos *pos);
void		error_init_pos(t_pos *pos);
int			is_error_pos(t_pos pos);

#endif