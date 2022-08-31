#include "../../include/bsq.h"

int	ft_check_map(char *str, char *cond, int nb_row)
{
	if (ft_check_chars(str, cond) && ft_check_height(str, nb_row) \
			&& ft_check_width(str, ft_first_line_mat(str)))
		return (1);
	else
		return (0);
}
