#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str1 = "Hello";
    const char *str2 = "Hella";
    size_t n = 5;

    int result = ft_memcmp(str1, str2, n);

    if (result < 0) {
        printf("'%s' es menor que '%s'.\n", str1, str2);
    } else if (result > 0) {
        printf("'%s' es mayor que '%s'.\n", str1, str2);
    } else {
        printf("'%s' es igual a '%s'.\n", str1, str2);
    }

    return 0;
}
