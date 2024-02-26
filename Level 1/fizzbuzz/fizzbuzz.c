#include <unistd.h>

void    ft_putnum(int n)
{
    char    c;

    if (n > 9)
    {
        ft_putnum(n/10);
        n = n % 10;
    }
    c = n + '0';
    write(1, &c, 1);
}
int   ft_putchar(int x)
{
    int n;

    n = 0;
    if (x%3 == 0)
    {
        if (x%5 == 0)
        {
            n = write (1, "fizzbuzz", 9);
            n += write (1, "\n", 2);
            if (n == 8 || n == 1)
                n = -1;
            return (n);
        }
       n = write (1, "fizz", 5);
    }
    else if (x%5 == 0)
        n = write(1, "buzz", 5);
    else
       ft_putnum(x);
    n += write(1, "\n", 1);
    if (n == 4 || n == 1)
        n = -1;
    return(n);
}

int main(void)
{
    int i;
    int n;

    i = 1;
    while (i <= 100)
    {
        n = ft_putchar(i);
        if (n == -1)
            return(n);
        i++;
    }
} 