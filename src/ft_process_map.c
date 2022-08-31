#include "../include/bsq.h"

int	ft_check_row(char **map, char cond, t_box current)
{
	int	num;

	num = 0;
	while (num < current.size)
	{
		if (map[current.row + current.size - 1][current.col + num] == cond)
			return (0);
		num++;
	}
	return (1);
}

int	ft_check_col(char **map, char cond, t_box current)
{
	int	num;

	num = 0;
	while (num < current.size)
	{
		if (map[current.row + num][current.col + current.size - 1] == cond)
			return (0);
		num++;
	}
	return (1);
}

int	ft_check_square(char **map, char cond, t_box current)
{
	int	cont;

	cont = 0;
	if (ft_check_row(map, cond, current) && ft_check_col(map, cond, current))
		return (1);
	else
		return (0);
}

int	**ft_process_map(char **map, char cond, int row, int col)
{
	int		i;
	int		j;
	int		**sqr;
	t_box	current;

	sqr = ft_create_matrix_int(row, col);
	if (!sqr)
		return (0);
	j = 0;
	while (j < row)
	{
		i = 0;
		while (i < col)
		{
			current.row = j;
			current.col = i;
			current.size = 0;
			while (current.size <= row - current.row
				&& current.size <= col - current.col)
			{
				if (ft_check_square(map, cond, current))
					current.size++;
				else
					break ;
			}
			sqr[j][i] = current.size - 1;
			i++;
		}
		j++;
	}
	return (sqr);
}
