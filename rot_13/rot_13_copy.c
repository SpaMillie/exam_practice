#include <unistd.h>

void	rot_13(char *s)
{
    int		i;
	char	c;
	
	i = 0;
    while (s[i] != '\0')
	{
		c = s[i];
		if ((c <= 'z' && c > 'm') || (c <= 'Z' && c > 'M'))
			c -= 13;
		else if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
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