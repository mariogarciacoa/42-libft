#include "libft.h"
#include <stdio.h>

char add_one(unsigned int index, char c) {
    // Agrega 1 al carácter ASCII en cada posición
    return c + 1;
}

int main(void) {
    const char *input = "abc";
    char *output = ft_strmapi(input, &add_one);

    if (output) {
        printf("Input: %s\n", input);
        printf("Output: %s\n", output);
        free(output);
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;
}
