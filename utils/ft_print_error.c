#include "../include/bsq.h"

void	ft_print_error(int error)
{
	if (error == 1)
		ft_putstr("Malloc error\n");
	if (error == 2)
		ft_putstr("Open error\n");
	if (error == 3)
		ft_putstr("Close error\n");
	if (error == 4)
		ft_putstr("Free error\n");
	if (error == 5)
		ft_putstr("map error\n");
}
