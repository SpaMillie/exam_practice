#include <unistd.h>

void	rot_13(char *s)
{
    int		i;
	char	c;
	
	i = 0;
    while (s[i] != '\0')
	{
		c = s[i];
		if (s[i] >= 'a' && s[i] <= 'z')
			c = (s[i] - 'a' + 13) % 26 + 'a';
		else if (s[i] >= 'A' && s[i] <= 'Z')
			c = (s[i] - 'A' + 13) % 26 + 'A';
		write (1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write (1, "\n", 1);
}