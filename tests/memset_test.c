#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char buffer[20];

    // Usando ft_memset
    ft_memset(buffer, '*', 10);
    printf("Cadena generada usando ft_memset: %s\n", buffer);

    // Usando memset (para comparar)
    memset(buffer, '-', 10);
    printf("Cadena generada usando memset: %s\n", buffer);

    return 0;
}
