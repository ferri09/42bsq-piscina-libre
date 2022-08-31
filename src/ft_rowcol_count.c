#include "../include/bsq.h"

void	ft_rowcol_count(t_misc *misc)
{
	int		i;
	int		j;
	char	*numcond;

	i = 0;
	while (misc->buff[i] != '\n')
		i++;
	misc->col = i;
	numcond = malloc(i * sizeof(char));
	if (!numcond)
		return ;
	i = 0;
	while (misc->condition[i])
	{
		i++;
	}
	j = i - 4;
	i = 0;
	while (i <= j)
	{
		numcond[i] = misc->condition[i];
		i++;
	}
	misc->row = ft_atoi(numcond);
	free(numcond);
}
