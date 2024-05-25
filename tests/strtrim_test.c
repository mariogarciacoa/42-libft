#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s1 = "  Hello, World!  ";
	char *set = " ";
	char *trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: '%s'\n", s1);
		printf("Trimmed string: '%s'\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	// Another test case
	s1 = "***Welcome to 42***";
	set = "*";
	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: '%s'\n", s1);
		printf("Trimmed string: '%s'\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
