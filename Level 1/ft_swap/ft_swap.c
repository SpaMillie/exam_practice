#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main(void)
{
    int a = 6;
    int b = 66;

    ft_swap(&a, &b);
    printf("a is now %d and b is %d", a, b);
}