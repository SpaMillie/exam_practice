#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    int n;

    if (str[i] != '\0')
    {
        while (str[i] == '\b' || str[i] == '\t' || str[i] == '\v' || str[i] == 32)
            i++;
        while (str[i] > 32 && str[i] < 127)
        {
           n = write(1, &str[i++], 1);
           if (n == -1)
                break ;
        }
    }
}

int main(int argc, char **argv)
{
    int i = 1;

    if (argc == 2)
        ft_putstr(argv[i]);
    write (1, "\n", 1);
}