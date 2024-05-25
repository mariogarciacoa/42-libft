#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(void) {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // Abrir un archivo para escribir
    
    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }
    
    ft_putchar_fd('A', fd); // Escribir el carácter 'A' en el archivo
    ft_putchar_fd('\n', fd); // Escribir un salto de línea en el archivo
    
    close(fd); // Cerrar el archivo
    
    printf("Carácter 'A' escrito en el archivo output.txt.\n");

    return 0;
}
