#include "../include/bsq.h"

void	ft_str_to_map(int row, int col, t_misc *misc)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = -1;
	misc->map = ft_create_matrix_char(row + 1, col + 1);
	while (i < row)
	{
		j = 0;
		k += 1;
		while (j < col)
		{
			misc->map[i][j] = misc->buff[k];
			j++;
			k++;
		}
		misc->map[i][j] = 0;
		i++;
	}
	misc->map[i][j] = 0;
}
