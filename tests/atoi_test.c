#include <stdio.h>
#include "libft.h"

int main()
{
    const char *test_cases[] = {
        "42",
        "   -42",
        "4193 with words",
        "words and 987",
        "-91283472332",
        "    +123",
        "0",
        "   +0",
        "\t\n\v\f\r 42",
        "-0",
        "   ",
        "+",
        "-",
        "123abc456",
        NULL};

    int i = 0;
    while (test_cases[i])
    {
        printf("Input: '%s', Output: %d\n", test_cases[i], ft_atoi(test_cases[i]));
        i++;
    }

    return 0;
}
