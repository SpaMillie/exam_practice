#include <unistd.h>

void rotone(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i] != '\0')
    {
        c = str[i];
        if (c >= 'a' && c <= 'z')
            c = (str[i] - 'a' + 1) % 26 + 'a';
        else if (c >= 'A' && c <= 'Z')
            c = (str[i] - 'A' + 1) % 26 + 'A';
        write(1, &c, 1);
        i++;
    }
}
int main (int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1,"\n",1);
}