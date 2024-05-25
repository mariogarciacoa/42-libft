#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str = "Hello, world!";
    char *result;

    // Test 1: Character is in the string
    result = ft_strchr(str, 'w');
    if (result != NULL)
        printf("Test 1: Found 'w' at position: %ld\n", result - str);
    else
        printf("Test 1: 'w' not found\n");

    // Test 2: Character is not in the string
    result = ft_strchr(str, 'z');
    if (result != NULL)
        printf("Test 2: Found 'z' at position: %ld\n", result - str);
    else
        printf("Test 2: 'z' not found\n");

    // Test 3: Searching for the null terminator
    result = ft_strchr(str, '\0');
    if (result != NULL)
        printf("Test 3: Found null terminator at position: %ld\n", result - str);
    else
        printf("Test 3: Null terminator not found\n");

    return 0;
}
