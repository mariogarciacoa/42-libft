#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "Hello, World!";
    char buffer[20];

    // Usando ft_memmove
    ft_memmove(buffer, str, strlen(str) + 1);
    printf("Cadena copiada usando ft_memmove: %s\n", buffer);

    // Usando memmove (para comparar)
    memmove(buffer + 7, buffer, 13);
    printf("Cadena copiada usando memmove: %s\n", buffer);

    return 0;
}
