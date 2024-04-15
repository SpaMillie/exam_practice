#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
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
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		if (str[i] != '\0')
			wc++;
		while (str[i] != '\0' && (str[i] != ' ' || str[i] != '\n' || str[i] != '\t'))
			i++;
	}
	char **s = (char **)malloc(sizeof(char *) * (wc + 1)); //the num of words + the NULL at the end
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
		j = i;
		while (str[i] != '\0' && (str[i] != ' ' || str[i] != '\n' || str[i] != '\t'))
			i++;
		if (i > j)
		{
			s[k] = (char *)malloc(sizeof(char) * (i - j) + 1); //total num of char + \0 at the end
			ft_strncpy(&str[j], s[k], i - j);
			k++;
		}
	}
	s[k] = NULL;
	return (s);
}