#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Prueba 1: Asignar memoria para 5 elementos de tamaño 4 bytes (como int)
    int *array = (int *)ft_calloc(5, sizeof(int));
    if (array == NULL)
    {
        fprintf(stderr, "ft_calloc failed to allocate memory\n");
        return (1);
    }

    // Verificar si la memoria ha sido inicializada a cero
    for (int i = 0; i < 5; i++)
    {
        if (array[i] != 0)
        {
            fprintf(stderr, "Memory not initialized to zero at index %d\n", i);
            free(array);
            return (1);
        }
    }

    printf("Test 1 passed: Memory initialized to zero\n");

    free(array);

    // Prueba 2: Asignar memoria con nitems o size igual a 0
    void *zero_alloc = ft_calloc(0, 0);
    if (zero_alloc == NULL)
    {
        fprintf(stderr, "ft_calloc failed to allocate memory for zero size\n");
        return (1);
    }
    printf("Test 2 passed: Zero allocation returns non-NULL pointer\n");

    free(zero_alloc);

    // Prueba 3: Asignar una cantidad grande de memoria para ver si se maneja correctamente
    size_t large_size = (size_t) - 1 / 2;
    void *large_alloc = ft_calloc(large_size, sizeof(char));
    if (large_alloc == NULL)
    {
        printf("Test 3 passed: Large allocation failed as expected\n");
    }
    else
    {
        fprintf(stderr, "Test 3 failed: Large allocation succeeded unexpectedly\n");
        free(large_alloc);
        return (1);
    }

    return 0;
}
