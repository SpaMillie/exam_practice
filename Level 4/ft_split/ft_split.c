/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:00:06 by mspasic           #+#    #+#             */
/*   Updated: 2024/04/15 19:47:39 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int	n)
{
	int i = 0;

	while (s1[i] != '\0' && i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;

	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] != '\0')
			wc++;
		while (str[i] != '\0' && (str[i] != ' ' || str != '\t' || str[i] != '\n'))
			i++;
	}
	i = 0;
	char **s = (char **)malloc(sizeof(char *) * (wc + 1));
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] != '\0' && (str[i] != ' ' || str != '\t' || str[i] != '\n'))
			i++;
		if (i != j)
		{
			s[k] = (char *)malloc(sizeof(char) * (i - j) + 1);
			ft_strncpy(&str[j], s[k], i - j);
			k++;
		}
	}
	s[k] = NULL;
	return (s);
}
		
