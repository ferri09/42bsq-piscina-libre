/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:57:43 by mferri-m          #+#    #+#             */
/*   Updated: 2022/08/31 16:17:52 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bsq.h"

void ft_str_to_map(int row, int col, t_misc *misc)
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
