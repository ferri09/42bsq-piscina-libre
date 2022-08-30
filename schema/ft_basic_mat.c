/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basic_mat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarja-p <abarja-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:41:15 by abarja-p          #+#    #+#             */
/*   Updated: 2022/08/30 11:01:29 by abarja-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

// Creamos la matriz con malloc y la protegemos, free incluidos
char	**ft_create_matrix(int row, int col);

// Encontrar el maximo de una matriz y devolvemos la posicion
int	*ft_max_mat(int **sqr, int row, int col);
