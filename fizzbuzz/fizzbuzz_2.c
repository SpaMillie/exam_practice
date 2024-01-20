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

void ft_fizzbuzz(int x)
{
    if (x % 15 == 0)
        write(1, "fizzbuzz", 9);
    else if (x % 3 == 0)
        write(1, "fizz", 5);
    else if (x % 5 == 0)
        write(1, "buzz", 5);
    else
        ft_putnum(x);
    write(1, "\n", 2);  
}

int main(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        ft_fizzbuzz(i);
        i++;
    }
} 