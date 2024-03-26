/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:24:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/26 14:46:30 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

//flood_fill
void	check_right(char **tab, t_point size, t_point begin, char c);
void	check_left(char **tab, t_point size, t_point begin, char c);
void	check_up(char **tab, t_point size, t_point begin, char c);
void	check_down(char **tab, t_point size, t_point begin, char c);
void	flood_fill(char **tab, t_point size, t_point begin);
//test.c
char**	make_area(char** zone, t_point size);
int		main(void);

#endif
