/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:16:42 by mspasic           #+#    #+#             */
/*   Updated: 2024/03/28 19:57:00 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_length(int nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		length;
	char	*str;
	int		i;

	if (nbr == -2147483648)
		return("-2147483648\0");
	if (nbr == 0)
		return("0\0");
	i = 0;
	if (nbr < 0)
	{
		length = 1;
		i++;
		nbr *= -1;
	}
	else
		length = 0;
	length += ft_length(nbr);
	str = malloc(length * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[length--] = '\0';
	if (i != 0)
		str[0] = '-';
	while (nbr > 0)
	{
		str[length--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
