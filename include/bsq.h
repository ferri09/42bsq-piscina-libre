#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

// ----------------- structs ---------------
typedef struct box {
	int	row;
	int	col;
	int	size;
}	t_box;

typedef struct misc {
	char	*condition;
	char	*buff;
	char	*path;
	int		*max;
	char	**map;
	int		**sqr;
	int		size;
	int		row;
	int		col;
}	t_misc;

// ----------------- utils ---------------
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_print_error(int i);
int		ft_atoi(char *str);

// ----------------- error_management ---------------
int		ft_check_chars(char *str, char *cond);
int		ft_check_height(char *str, int nb_row);
int		ft_check_width(char *str, int size);
int		ft_first_line_mat(char *str);

// ----------------- main program ---------------
int		init_program(int ac, char **av);
int		engine(int ac, char **av, int filedest, t_misc misc);

// ----------------- map process ---------------
char	*ft_cut_head(char *buff);
char	*ft_cut_body(char *buff);
int		ft_check_map(char *str, char *cond, int nb_row);
int		**ft_process_map(char **map, char cond, int row, int col);

char	**ft_create_matrix_char(int row, int col);
int		**ft_create_matrix_int(int row, int col);
char	*my_strncpy(char *dest, char const *src, int n);
char	*ft_read_file(t_misc *misc);
char	*map_manager(int filedest, t_misc *misc);
void	ft_str_to_map(int row, int col, t_misc *misc);
void	ft_rowcol_count(t_misc *misc);
int		ft_atoi(char *str);

// ----------------- print_solv ---------------
void	ft_print_sol(t_misc misc, int *max_mat);

char	ft_full(t_misc misc);
char	ft_obstacle(t_misc misc);
int		*ft_max_mat(int **sqr, int row, int col);
int		**ft_process_map(char **map, char cond, int row, int col);

#endif
