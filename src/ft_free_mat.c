#include "../include/bsq.h"

void	ft_free_char(char **matrix, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(matrix[i]);
		j++;
	}
	free(matrix);
}

void	ft_free_int(int **matrix, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(matrix[i]);
		j++;
	}
	free(matrix);
}
