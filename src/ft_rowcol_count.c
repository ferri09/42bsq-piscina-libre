/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rowcol_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:57:31 by pbacardi          #+#    #+#             */
/*   Updated: 2022/08/31 15:08:16 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../include/bsq.h"

void	ft_rowcol_count(t_misc *misc)
{
	int		i;
	int		j;
	char	*numcond;

	i = 0;
	while (misc->buff[i] != '\n')
	{
		i++;
	}
	misc->col = i;
	numcond = malloc(i * sizeof(char));
	if(!numcond)
		return;
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
