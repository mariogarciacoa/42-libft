#include <stdio.h>
#include "libft.h"

int main()
{
    char str[] = "hola";
    int i = 0;

    ft_bzero(str, 2);
    while( i < sizeof(str))
    {
        printf("%d", str[i]);
        i++;
    }
}
