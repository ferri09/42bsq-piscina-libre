#include "../../include/bsq.h"

int	ft_check_chars(char *str, char *cond)
{
	int		i;
	char	j;
	char	c_void;
	char	c_obs;

	if (cond[3])
		return (0);
	c_void = cond[0];
	c_obs = cond[1];
	i = -1;
	j = 0;
	if (cond[0] == cond [1] || cond[0] == cond[2] || cond[1] == cond[2])
		return (0);
	while (cond[j])
	{
		if (cond[j] < ' ' || cond[j] > '~')
			return (0);
		j++;
	}
	while (str[++i])
		if (str[i] != c_void && str[i] != c_obs && str[i] != '\n')
			return (0);
	return (1);
}
