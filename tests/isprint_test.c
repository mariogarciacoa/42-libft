#include "libft.h"
#include <stdio.h>

void test_ft_isprint(int c) {
    if (ft_isprint(c)) {
        printf("'%c' is printable.\n", c);
    } else {
        printf("'%c' is not printable.\n", c);
    }
}

int main(void) {
    // Pruebas con caracteres imprimibles
    for (int c = 32; c <= 126; c++) {
        test_ft_isprint(c);
    }

    // Pruebas con caracteres no imprimibles
    test_ft_isprint('\0');
    test_ft_isprint('\n');
    test_ft_isprint(31);
    test_ft_isprint(127);

    return 0;
}
