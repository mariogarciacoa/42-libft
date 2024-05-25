#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str = "Hello, World!";
    int c = 'o';
    size_t n = ft_strlen(str);

    void *result = ft_memchr(str, c, n);

    if (result != NULL) {
        printf("El carácter '%c' fue encontrado en la posición %ld.\n", c, (char *)result - str);
    } else {
        printf("El carácter '%c' no fue encontrado en la cadena.\n", c);
    }

    return 0;
}
