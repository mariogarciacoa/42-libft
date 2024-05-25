#include "libft.h"
#include <stdio.h>

void test_ft_isascii(int c) {
    if (ft_isascii(c)) {
        printf("'%c' is a valid ASCII character.\n", c);
    } else {
        printf("'%c' is not a valid ASCII character.\n", c);
    }
}

int main(void) {
    // Pruebas con caracteres ASCII válidos
    test_ft_isascii('a');
    test_ft_isascii('Z');
    test_ft_isascii('0');
    test_ft_isascii('!');
    test_ft_isascii('\n');
    test_ft_isascii('\0');

    // Pruebas con caracteres fuera del rango ASCII
    test_ft_isascii(128);
    test_ft_isascii(255);
    test_ft_isascii(-1);

    return 0;
}
