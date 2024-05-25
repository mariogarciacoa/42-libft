#include "libft.h"
#include <stdio.h>

void test_ft_isdigit(int c) {
    if (ft_isdigit(c)) {
        printf("'%c' is a digit.\n", c);
    } else {
        printf("'%c' is not a digit.\n", c);
    }
}

int main(void) {
    // Pruebas con dígitos del 0 al 9
    for (char c = '0'; c <= '9'; c++) {
        test_ft_isdigit(c);
    }

    // Pruebas con caracteres que no son dígitos
    test_ft_isdigit('a');
    test_ft_isdigit('Z');
    test_ft_isdigit('!');
    test_ft_isdigit('\n');
    test_ft_isdigit('\0');

    return 0;
}
