#include "libft.h"
#include <fcntl.h> // Para las constantes de apertura de archivos
#include <unistd.h> // Para la función close y write
#include <stdio.h>  // Para la función perror

int main(void) {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // Abrir el archivo para escritura

    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribir varias cadenas en el archivo
    ft_putstr_fd("Hola, mundo!", fd);
    ft_putstr_fd("\n", fd); // Agregar un salto de línea

    ft_putstr_fd("Esta es una prueba de ft_putstr_fd.", fd);
    ft_putstr_fd("\n", fd); // Agregar un salto de línea

    ft_putstr_fd("Otra línea para probar la función.", fd);
    ft_putstr_fd("\n", fd); // Agregar un salto de línea

    close(fd); // Cerrar el archivo

    return 0;
}

