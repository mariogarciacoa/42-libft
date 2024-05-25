#include "libft.h"
#include <fcntl.h> // Para las constantes de apertura de archivos
#include <unistd.h> // Para la función close

int main(void) {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // Abrir el archivo para escritura

    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribir una cadena en el archivo con un salto de línea al final
    ft_putendl_fd("¡Hola, mundo!", fd);

    close(fd); // Cerrar el archivo

    return 0;
}
