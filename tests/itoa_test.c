#include "libft.h"
#include <stdio.h>

int main(void) {
    int num = 12345;
    char *str = ft_itoa(num);
    
    if (str) {
        printf("Número: %d, Cadena: %s\n", num, str);
        free(str); // Liberar la memoria asignada por ft_itoa
    } else {
        printf("Error: No se pudo convertir el número %d en una cadena.\n", num);
    }
    
    return 0;
}
