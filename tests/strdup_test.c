#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *original = "Hello, world!";
    char *duplicate;

    // Duplicar la cadena
    duplicate = ft_strdup(original);

    // Verificar el resultado
    if (duplicate) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // Liberar la memoria asignada para el duplicado
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
