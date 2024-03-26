/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:24:54 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/26 21:28:18 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	check(char	**tab, t_point size, int x, int y, char c)
{
	tab[x][y] = 'F';
	if (x + 1 < size.y && tab[x + 1][y] == c)
		check(tab, size, x + 1, y, c);
	if (x - 1 >= 0 && tab[x - 1][y] == c)
		check(tab, size, x - 1, y, c);
	if (y + 1 < size.x && tab[x][y + 1] == c)
		check(tab, size, x, y + 1, c);
	if (y - 1 >= 0 && tab[x][y - 1] == c)
		check(tab, size, x, y - 1, c);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	check(tab, size, begin.y, begin.x, tab[begin.y][begin.x]);
}
