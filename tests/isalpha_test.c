#include "libft.h"
#include <stdio.h>

void test_ft_isalpha(int c) {
    if (ft_isalpha(c)) {
        printf("'%c' is an alphabetic character.\n", c);
    } else {
        printf("'%c' is not an alphabetic character.\n", c);
    }
}

int main(void) {
    // Pruebas con caracteres alfabéticos
    test_ft_isalpha('a');
    test_ft_isalpha('Z');

    // Pruebas con caracteres no alfabéticos
    test_ft_isalpha('1');
    test_ft_isalpha('!');
    test_ft_isalpha(' ');

    // Prueba con el carácter nulo
    test_ft_isalpha('\0');

    // Pruebas con caracteres de la tabla ASCII extendida
    test_ft_isalpha(128);
    test_ft_isalpha(255);

    return 0;
}
