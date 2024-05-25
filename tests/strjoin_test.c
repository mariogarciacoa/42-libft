#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char const *s1 = "Hello, ";
    char const *s2 = "world!";
    char *result;

    // Concatenar s1 y s2
    result = ft_strjoin(s1, s2);

    // Verificar el resultado
    if (result) {
        printf("s1: %s\n", s1);
        printf("s2: %s\n", s2);
        printf("Joined: %s\n", result);
        free(result); // Liberar la memoria asignada para la cadena resultante
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
