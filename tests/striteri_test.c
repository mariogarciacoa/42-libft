#include "libft.h"
#include <stdio.h>

void to_uppercase(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
    {
        *c = *c - ('a' - 'A');
    }
}

int main(void) {
    char str[] = "hello world!";
    
    printf("Original string: %s\n", str);
    
    ft_striteri(str, to_uppercase);
    
    printf("Modified string: %s\n", str);
    
    return 0;
}
