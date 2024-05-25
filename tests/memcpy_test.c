#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "Hello, World!";
    char dest[20];

    // Usando ft_memcpy
    ft_memcpy(dest, src, strlen(src) + 1);
    printf("Cadena copiada usando ft_memcpy: %s\n", dest);

    // Usando memcpy (para comparar)
    memcpy(dest, src, strlen(src) + 1);
    printf("Cadena copiada usando memcpy: %s\n", dest);

    return 0;
}
