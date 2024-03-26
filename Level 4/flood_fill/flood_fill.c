/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:24:54 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/26 14:47:16 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	check_right(char **tab, t_point size, t_point begin, char c)
{
	if (begin.x + 1 < size.x)
	{
		begin.x = begin.x + 1;
		if (tab[begin.x][begin.y] != c || tab[begin.x][begin.y] != 'F')
			return ;
		tab[begin.x][begin.y] = 'F';
		check_up(tab, size, begin, c);
		check_down(tab, size, begin, c);	
		check_right(tab, size, begin, c);
	}
}

void	check_left(char **tab, t_point size, t_point begin, char c)
{
	if (begin.x - 1 >= 0)
	{
		begin.x = begin.x - 1;
		if (tab[begin.x][begin.y] != c || tab[begin.x][begin.y] != 'F')
			return ;
		tab[begin.x][begin.y] = 'F';
		check_up(tab, size, begin, c);
		check_down(tab, size, begin, c);	
		check_left(tab, size, begin, c);
	}
}

void	check_up(char **tab, t_point size, t_point begin, char c)
{
	if (begin.y - 1 >= 0)
	{
		begin.y = begin.y - 1;
		if (tab[begin.x][begin.y] != c || tab[begin.x][begin.y] != 'F')
			return ;
		tab[begin.x][begin.y] = 'F';
		check_left(tab, size, begin, c);
		check_right(tab, size, begin, c);
		check_up(tab, size, begin, c);
	}
}

void	check_down(char **tab, t_point size, t_point begin, char c)
{
	if (begin.y + 1 < size.y)
	{
		begin.y = begin.y + 1;
		if (tab[begin.x][begin.y] != c || tab[begin.x][begin.y] != 'F')
			return ;
		tab[begin.x][begin.y] = 'F';
		check_left(tab, size, begin, c);
		check_right(tab, size, begin, c);
		check_down(tab, size, begin, c);
	}
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;
	int		i;

	i = 0;
	if (begin.x >= size.x || begin.y >= size.y)
		return ;
	c = tab[begin.x][begin.y];
	tab[begin.x][begin.y] = 'F';
	if (begin.y == 0)
		check_down(tab, size, begin, c);
	else if (begin.y + 1 == size.y)
		check_up(tab, size, begin, c);
	else
	{
		check_up(tab, size, begin, c);
		check_down(tab, size, begin, c);
	}
}
