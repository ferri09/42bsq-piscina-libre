#include "../include/bsq.h"

void	ft_print_sol(t_misc misc, int *max_mat)
{
	int	i;
	int	j;
	int	printed;

	i = 0;
	while (i < misc.row)
	{
		j = 0;
		printed = 0;
		while (j < misc.col)
		{
			if ((i >= max_mat[1] && i < max_mat[1] + max_mat[0])
				&& (j >= max_mat[2] && j < max_mat[2] + max_mat[0]))
			{
				ft_putchar(ft_full(misc));
				printed++;
			}
			else
				ft_putchar(misc.map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

char	ft_full(t_misc misc)
{
	int	i;

	i = ft_strlen(misc.condition) - 1;
	return (misc.condition[i]);
}

char	ft_obstacle(t_misc misc)
{
	int	i;

	i = ft_strlen(misc.condition) - 2;
	return (misc.condition[i]);
}
