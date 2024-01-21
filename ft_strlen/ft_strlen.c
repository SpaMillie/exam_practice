#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    if(str)
    {
        while(str[i] != '\0')
            i++;
    }
    return (i);
}

int main(void)
{
    char *str = "heyheyhey";

    printf("%d\n", ft_strlen(str));
}