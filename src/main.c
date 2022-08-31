#include "../include/bsq.h"

int	main(int ac, char **av)
{
	if (init_program(ac, av) == 84)
		return (84);
	else
		return (0);
}

int	init_program(int ac, char **av)
{
	int		filedest;
	int		size;
	t_misc	misc;

	if (ac == 1)
		filedest = 0;
	else
		filedest = 1;
	engine(ac, av, filedest, misc);
	return (0);
}

int	engine(int ac, char **av, int filedest, t_misc misc)
{
	int	i;

	i = 1;
	while (av[i] != NULL)
	{
		misc.path = av[i];
		if (map_manager(filedest, &misc) == NULL)
			ft_print_error(5);
		ft_rowcol_count(&misc);
		ft_str_to_map(misc.row, misc.col, &misc);
		if (misc.map)
			misc.sqr = ft_process_map(misc.map, ft_obstacle(misc), \
						misc.row, misc.col);
		else
			return (84);
		if (misc.sqr)
			misc.max = ft_max_mat(misc.sqr, misc.row, misc.col);
		else
			return (84);
		if (misc.max[0] != 0)
			ft_print_sol(misc, misc.max);
		else
			ft_print_error(5);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

char	*map_manager(int filedest, t_misc *misc)
{
	misc->buff = ft_read_file(misc);
	if (!misc->buff)
		return (NULL);
	misc->condition = ft_cut_head(misc->buff);
	if (misc->condition == NULL)
		return (NULL);
	misc->buff = ft_cut_body(misc->buff);
	if (!misc->buff)
		return (NULL);
	return (misc->buff);
}

int	ft_size_bytes(char *path)
{
	int		size;
	char	*buff;
	int		fd;

	fd = open(path, O_RDONLY);
	if (!fd)
		return (84);
	size = 0;
	buff = malloc(2 * sizeof(char));
	if (buff == 0)
		return (-1);
	while (read(fd, buff, 1) == 1)
		size++;
	free(buff);
	close(fd);
	return (size);
}

char	*ft_read_file(t_misc *misc)
{
	int	size;
	int	fd;

	misc->buff = NULL;
	size = ft_size_bytes(misc->path);
	fd = open(misc->path, O_RDONLY);
	if (fd == -1)
		return (NULL);
	misc->buff = malloc((size + 1) * sizeof(char));
	if (!misc->buff)
		return (NULL);
	if (read(fd, misc->buff, size) == -1)
		return (NULL);
	misc->buff[size] = '\0';
	close(fd);
	return (misc->buff);
}
