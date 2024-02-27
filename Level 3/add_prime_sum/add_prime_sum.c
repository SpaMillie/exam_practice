/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:23:10 by mspasic           #+#    #+#             */
/*   Updated: 2024/02/27 17:53:39 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_error(void)
{
	write(1, "0", 1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *s)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(s);
	while(s[i] != '\0')
	{
		if (s[i] == '+' && i = 0)
			i++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = s[i] + '0';
		}
		else
		{
			ft_error();
			return(0);
		}
		i++;
	}
}


void	add_prime(char *s)
{
	int	i;

	i = 0;
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime(argv[1]);
	else
		ft_error;
	write (1, "\n", 1);
}