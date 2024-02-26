#include <unistd.h>

void search(char *str, char c, char d)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == c)
            write(1, &d, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][1] == '\0' && argv[3][1] == '\0') 
            search(argv[1], *argv[2], *argv[3]);
    }
    write (1,"\n",1);
}