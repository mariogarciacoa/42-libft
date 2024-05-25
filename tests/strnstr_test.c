#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *haystack = "hello world";
    const char *needle = "world";
    size_t len = 11;

    char *result = ft_strnstr(haystack, needle, len);

    if (result) {
        printf("Needle found at position: %ld\n", result - haystack);
    } else {
        printf("Needle not found\n");
    }

    return 0;
}
