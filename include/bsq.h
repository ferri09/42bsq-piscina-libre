/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mferri-m <mferri-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 07:33:55 by abarja-p          #+#    #+#             */
/*   Updated: 2022/08/30 21:46:56 by mferri-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

// ----------------- utils ---------------
void	ft_putchar(char c);
int	    ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_print_error();
int	    ft_atoi(char *str);

// ----------------- error_management ---------------
int ft_check_chars(char *str, char *cond);
int	ft_check_height(char *str, int nb_row);
int	ft_check_width(char *str, int size);
int ft_first_line_mat(char *str);

#endif
