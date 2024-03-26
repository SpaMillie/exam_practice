/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:24:30 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/26 20:49:36 by mspasic          ###   ########.fr       */
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
void	check(char **tab, t_point size, int x, int y, char c);
void	flood_fill(char **tab, t_point size, t_point begin);
//test.c
char**	make_area(char** zone, t_point size);
int		main(void);

#endif
