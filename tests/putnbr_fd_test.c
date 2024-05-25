#include "libft.h"
#include <fcntl.h> // Para las constantes de apertura de archivos
#include <unistd.h> // Para la función close y write

int main(void) {
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644); // Abrir el archivo para escritura

    if (fd == -1) {
        perror("Error al abrir el archivo");
        return 1;
    }

    // Escribir varios números en el archivo
    ft_putnbr_fd(12345, fd);
    ft_putchar_fd('\n', fd); // Agregar un salto de línea después del número

    ft_putnbr_fd(-67890, fd);
    ft_putchar_fd('\n', fd); // Agregar un salto de línea después del número

    ft_putnbr_fd(0, fd);
    ft_putchar_fd('\n', fd); // Agregar un salto de línea después del número

    ft_putnbr_fd(-2147483648, fd); // Escribir el entero mínimo
    ft_putchar_fd('\n', fd); // Agregar un salto de línea después del número

    ft_putnbr_fd(2147483647, fd); // Escribir el entero máximo
    ft_putchar_fd('\n', fd); // Agregar un salto de línea después del número

    close(fd); // Cerrar el archivo

    return 0;
}
