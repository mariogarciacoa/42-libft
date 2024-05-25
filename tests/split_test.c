#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print_split_result(char **result) {
    int i = 0;
    if (!result) {
        printf("NULL\n");
        return;
    }
    while (result[i] != NULL) {
        printf("result[%d]: %s\n", i, result[i]);
        i++;
    }
}

int main(void) {
    char **result;

    // Test 1: Regular case
    result = ft_split("Hola, mundo! Esta es una prueba.", ' ');
    printf("Test 1:\n");
    print_split_result(result);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test 2: Multiple consecutive delimiters
    result = ft_split("Esto,,es,,,una,,,prueba.", ',');
    printf("Test 2:\n");
    print_split_result(result);
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test 3: No delimiters in the string
    result = ft_split("SinDelimitadores", ' ');
    printf("Test 3:\n");
    print_split_result(result);
    free(result[0]);
    free(result);

    // Test 4: Delimiters only
    result = ft_split(",,,,,", ',');
    printf("Test 4:\n");
    print_split_result(result);
    free(result);

    // Test 5: Empty string
    result = ft_split("", ' ');
    printf("Test 5:\n");
    print_split_result(result);
    free(result);

    return 0;
}
