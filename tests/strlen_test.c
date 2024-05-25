#include "libft.h"
#include <stdio.h>

int main(void) {
    const char *str1 = "Hello, world!";
    const char *str2 = "";
    const char *str3 = "Lorem ipsum dolor sit amet";

    printf("Length of '%s': %zu\n", str1, ft_strlen(str1));
    printf("Length of '%s': %zu\n", str2, ft_strlen(str2));
    printf("Length of '%s': %zu\n", str3, ft_strlen(str3));

    return 0;
}
