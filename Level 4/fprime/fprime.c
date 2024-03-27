/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:33:26 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/27 19:20:55 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(char *str)
{
	int	num;
	int	i;

	i = 2;
	num = atoi(str);
	if (num <= 1)
	{
		if (num == 1)
			printf("1");
		return ;
	}
	while (num >= i)
	{
		if (num % i == 0)
		{	
			printf("%d", i);
			num /= i;
			if (num == 1)
				break ;
			printf("*");
			i = 2;
		}
		else
			i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
}
