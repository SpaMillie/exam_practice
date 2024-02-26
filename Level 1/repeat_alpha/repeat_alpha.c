#include <unistd.h>

void    repeat_alpha(char c)
{
    int     n;
    int     x;

    x = 1;
    n = c;
    if (c >= 'A' && c <= 'Z')
        x = n - 64;
    if (c >= 'a' && c <= 'z')
        x = n - 96;
    while (x != 0)
    {
        write (1, &c, 1);
        x--;
    }
}

void    go_through_string(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        repeat_alpha(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        go_through_string(argv[1]);
    write (1, "\n", 1);
}