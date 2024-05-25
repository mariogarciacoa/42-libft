#include "libft.h"
#include <stdio.h>

void test_ft_isalnum(int c) {
    if (ft_isalnum(c)) {
        printf("'%c' is alphanumeric.\n", c);
    } else {
        printf("'%c' is not alphanumeric.\n", c);
    }
}

int main(void) {
    // Pruebas con caracteres alfabéticos
    test_ft_isalnum('a');
    test_ft_isalnum('Z');
    
    // Pruebas con caracteres numéricos
    test_ft_isalnum('0');
    test_ft_isalnum('9');
    
    // Pruebas con caracteres no alfanuméricos
    test_ft_isalnum('!');
    test_ft_isalnum(' ');
    test_ft_isalnum('\n');
    
    // Prueba con el carácter nulo
    test_ft_isalnum('\0');

    // Pruebas con caracteres de la tabla ASCII extendida
    test_ft_isalnum(128);
    test_ft_isalnum(255);

    return 0;
}
