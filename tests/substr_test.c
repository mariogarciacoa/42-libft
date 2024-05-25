#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = "Hello, World!";
    char *substring;

    // Caso 1: Substring normal
    substring = ft_substr(s, 7, 5);
    if (substring)
    {
        printf("Original string: '%s'\n", s);
        printf("Substring: '%s'\n", substring);
        free(substring);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Caso 2: start mayor que la longitud de s
    substring = ft_substr(s, 20, 5);
    if (substring)
    {
        printf("Original string: '%s'\n", s);
        printf("Substring with start > strlen(s): '%s'\n", substring);
        free(substring);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    // Caso 3: len mayor que los caracteres restantes
    substring = ft_substr(s, 7, 50);
    if (substring)
    {
        printf("Original string: '%s'\n", s);
        printf("Substring with len > remaining chars: '%s'\n", substring);
        free(substring);
    }
    else
    {
        printf("Memory allocation failed\n");
    }

    return 0;
}
