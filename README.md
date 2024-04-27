# FUNCTIONS

## ft_isalpha 

    int ft_isalpha(int c);

Definición:
isalpha es una función que se utiliza para determinar si un carácter es una letra del alfabeto. Esta función está definida en la biblioteca estándar <ctype.h> en C.

Requiere:
La función isalpha requiere un argumento de tipo int, que representa el valor entero del carácter que se desea verificar si es una letra del alfabeto.

Devuelve:
Devuelve un valor distinto de cero si el carácter es una letra del alfabeto (mayúscula o minúscula).
Devuelve cero si el carácter no es una letra del alfabeto.

## ft_isdigit 

    int ft_isdigit(int c);

Descripción:
isdigit es una función de la biblioteca estándar de C que determina si un carácter dado es un dígito del conjunto de caracteres ASCII ('0' - '9').

Requiere:
La función isdigit toma un argumento de tipo int, que representa el valor entero del carácter que se desea comprobar.

Devuelve:
Devuelve un valor entero distinto de cero si el carácter es un dígito ('0' - '9').
Devuelve cero si el carácter no es un dígito.

## ft_isalnum

    int ft_isalnum(int c);

Descripción:
isalnum es una función de la biblioteca estándar de C que determina si un carácter es alfanumérico. Un carácter alfanumérico es aquel que es una letra (mayúscula o minúscula) o un dígito.

Requiere:
La función isalnum toma un argumento de tipo int, que representa el valor entero del carácter que se desea comprobar.

Devuelve:
Devuelve un valor entero distinto de cero si el carácter es alfanumérico.
Devuelve cero si el carácter no es alfanumérico.

## ft_isascii

    int ft_isascii(int c);

Descripción:
isascii es una función de la biblioteca estándar de C que comprueba si un carácter dado es un carácter ASCII.

Requiere:
La función isascii toma un argumento de tipo int, que representa el valor entero del carácter que se desea comprobar.

Devuelve:
Devuelve un valor entero distinto de cero si el carácter es un carácter ASCII (es decir, está en el rango de 0 a 127).
Devuelve cero si el carácter no es un carácter ASCII (es decir, está fuera del rango de 0 a 127).

## isprint  

    int ft_isprint(int c);

Descripción:
isprint es una función de la biblioteca estándar de C que verifica si un carácter dado es imprimible o no.

Requiere:
La función isprint toma un argumento de tipo int, que representa el valor entero del carácter que se desea comprobar.

Devuelve:
Devuelve un valor entero distinto de cero si el carácter es imprimible.
Devuelve cero si el carácter no es imprimible (por ejemplo, un carácter de control).

## ft_strlen

    size_t ft_strlen(const char *str);

Descripción:
strlen es una función de la biblioteca estándar de C que calcula la longitud de una cadena de caracteres.

Requiere:
La función strlen toma un argumento de tipo const char *, que es un puntero a la cadena de caracteres cuya longitud se desea calcular.

Devuelve:
Devuelve un valor de tipo size_t, que representa el número de caracteres en la cadena, excluyendo el carácter nulo '\0'.

## ft_memset

    void *ft_memset(void *ptr, int value, size_t num);

Descripción:
memset es una función de la biblioteca estándar de C que establece los primeros num bytes del bloque de memoria apuntado por ptr con el valor especificado por value.

Requiere:
ptr: Un puntero al bloque de memoria que se va a establecer.
value: El valor que se utilizará para establecer el bloque de memoria. Debe ser un entero que se puede representar como un byte.
num: El número de bytes a establecer en el bloque de memoria.
Devuelve:
La función devuelve un puntero al bloque de memoria (ptr).

## ft_bzero

    void ft_bzero(void *ptr, size_t num);

Descripción:
bzero era una función de la biblioteca estándar de C que establecía los primeros num bytes del bloque de memoria apuntado por ptr en ceros.

Requiere:
ptr: Un puntero al bloque de memoria que se va a establecer en ceros.
num: El número de bytes a establecer en cero en el bloque de memoria.
Devuelve:
bzero no devuelve nada.


## ft_memcpy

    void	*ft_memcpy(void *dest, const void *src, size_t n)

Descripción:
memcpy es una función de la biblioteca estándar de C que copia n bytes desde la ubicación de memoria apuntada por src a la ubicación de memoria apuntada por dest. Ambas áreas de memoria no deben superponerse.

Requiere:
dest: Un puntero al destino donde se copiarán los datos.
src: Un puntero al origen de donde se copiarán los datos.
n: El número de bytes a copiar desde src a dest.
Devuelve:
La función devuelve un puntero al destino (dest).

## ft_memmove

    void *ft_memmove(void *dest, const void *src, size_t n);

Descripción:
memmove copia n bytes de datos desde la ubicación de memoria apuntada por src a la ubicación de memoria apuntada por dest. Esta función garantiza un comportamiento seguro incluso si las áreas de memoria se superponen. En caso de solapamiento, memmove copiará los datos de manera que no se produzcan errores.

Requiere:
dest: Un puntero al destino donde se copiarán los datos.
src: Un puntero al origen de donde se copiarán los datos.
n: El número de bytes a copiar desde src a dest.
Devuelve:
La función devuelve un puntero al destino (dest).

## ft_strlcpy

    size_t ft_strlcpy(char *dest, const char *src, size_t size);

Descripción:
strlcpy copia una cadena (src) en otra cadena (dest) hasta un máximo de size - 1 caracteres. Asegura que el búfer de destino (dest) esté siempre terminado con un carácter nulo ('\0'). Si size es menor que el tamaño de la cadena de origen (src), strlcpy copiará solo size - 1 caracteres de la cadena de origen y garantizará que el búfer de destino esté terminado con un carácter nulo.

Requiere:
dest: Un puntero al búfer de destino donde se copiará la cadena.
src: Un puntero a la cadena de origen que se copiará.
size: El tamaño del búfer de destino.
Devuelve:
La función devuelve la longitud de la cadena de origen (src). Si la cadena de origen es más larga que el tamaño especificado (size), devuelve el tamaño que habría tenido la cadena de destino si se hubiera copiado completamente. Esto no incluye el carácter nulo de terminación.

## ft_strlcat

    size_t	ft_strlcat(char *dst, const char *src, size_t size)

Descripción:
strlcat concatena la cadena src al final de la cadena dest, asegurándose de que el tamaño total de la cadena resultante no exceda size - 1 caracteres. A diferencia de strcat, strlcat tiene un límite explícito (size) para evitar desbordamientos de búfer. Además, garantiza que el búfer de destino (dest) esté siempre terminado con un carácter nulo ('\0').

Requiere:
dest: Un puntero al búfer de destino donde se concatenará la cadena.
src: Un puntero a la cadena que se concatenará.
size: El tamaño del búfer de destino.
Devuelve:
La función devuelve la longitud total de la cadena resultante. Esto es el mínimo entre strlen(dest) + strlen(src) y size - 1.

## ft_toupper

    int toupper(int c);

Descripción:
toupper convierte el carácter c en su equivalente en mayúscula, si es una letra minúscula. Si c no es una letra minúscula, la función devuelve c sin modificar.

Requiere:
c: El carácter que se va a convertir a mayúscula.
Devuelve:
La función devuelve el carácter convertido a mayúscula si es una letra minúscula. Si c no es una letra minúscula, la función devuelve c sin modificar.

## ft_tolower

    int tolower(int c);

Descripción:
La función tolower convierte el carácter c en su equivalente en minúscula, si es una letra mayúscula. Si c no es una letra mayúscula, la función devuelve c sin modificar.

Requiere:
c: El carácter que se va a convertir a minúscula.
Devuelve:
La función devuelve el carácter convertido a minúscula si es una letra mayúscula. Si c no es una letra mayúscula, la función devuelve c sin modificar.

## ft_strchr

    char	*ft_strrchr(const char *s, int c)

Descripción:
La función strchr busca la primera aparición del carácter c en la cadena str. Si el carácter es encontrado, devuelve un puntero al primer carácter encontrado en str que coincide con c. Si c no está presente en str, la función devuelve NULL.

Requiere:
str: Un puntero a la cadena de caracteres en la que se buscará el carácter.
c: El carácter que se está buscando en la cadena.
Devuelve:
La función devuelve un puntero al primer carácter en str que coincide con c, o NULL si c no está presente en str.

## ft_strrchr

    char	*ft_strrchr(const char *s, int c)

La función strrchr en C se utiliza para encontrar la última ocurrencia de un carácter específico en una cadena de caracteres. Busca el carácter dado en la cadena, comenzando desde el final de la cadena y avanzando hacia el principio.

Parámetros:

str: Puntero a la cadena de caracteres en la que se realizará la búsqueda.
character: El carácter que se busca en la cadena.

Valor de retorno:

Devuelve un puntero al último carácter character encontrado en la cadena str, o devuelve un puntero nulo si el carácter no está presente en la cadena.

La función strrchr busca la última ocurrencia del carácter especificado en la cadena str. Comienza desde el final de la cadena y avanza hacia el principio, deteniéndose en la primera ocurrencia del carácter o en el inicio de la cadena. Retorna un puntero a la posición del carácter encontrado, o un puntero nulo si el carácter no está presente en la cadena.


## ft_strncmp

    int strncmp(const char *str1, const char *str2, size_t n);

Parámetros:

str1: Puntero a la primera cadena de caracteres a comparar.
str2: Puntero a la segunda cadena de caracteres a comparar.
n: Número máximo de caracteres a comparar.
Valor de retorno:

Devuelve un valor entero que indica la relación entre las cadenas:
0 si las cadenas son iguales.
Un valor negativo si la primera cadena es menor que la segunda.
Un valor positivo si la primera cadena es mayor que la segunda.

La función strncmp compara los primeros n caracteres de las cadenas str1 y str2. Si las cadenas son idénticas en los primeros n caracteres, devuelve 0. Si las cadenas difieren en algún punto antes de los primeros n caracteres, devuelve un valor negativo si el primer carácter que difiere en str1 es menor que el correspondiente en str2, y un valor positivo si es mayor. Si n es mayor que la longitud de una o ambas cadenas, la comparación se detendrá cuando se alcance el final de alguna de las cadenas o cuando se hayan comparado n caracteres, lo que ocurra primero.

## ft_memchr

    void	*ft_memchr(const void *s, int c, size_t n)

La función memchr en C se utiliza para buscar la primera ocurrencia de un byte específico en una región de memoria. La búsqueda se realiza en un rango de bytes determinado por un puntero inicial y un tamaño especificado.

Parámetros:

ptr: Puntero al inicio de la región de memoria en la que se realizará la búsqueda.
value: Valor del byte que se busca.
num: Número de bytes en los que se realizará la búsqueda.
Valor de retorno:

Devuelve un puntero al primer byte que coincide con value, o un puntero nulo si value no se encuentra en la región de memoria especificada.
La función memchr busca la primera ocurrencia de value en los primeros num bytes de la región de memoria apuntada por ptr. Si encuentra el byte especificado, devuelve un puntero a esa ubicación en la memoria. Si no se encuentra value, la función devuelve un puntero nulo.

Es importante tener en cuenta que memchr trabaja a nivel de bytes y no interpreta los datos como cadenas de caracteres. Por lo tanto, puede utilizarse para buscar bytes en cualquier región de memoria, no solo en cadenas de caracteres.

## ft_memcmp

    int	ft_memcmp(const void *s1, const void *s2, size_t n)

La función memcmp en C se utiliza para comparar dos bloques de memoria byte a byte. Compara los primeros n bytes de las áreas de memoria apuntadas por los punteros especificados.

Parámetros:

ptr1: Puntero al primer bloque de memoria.
ptr2: Puntero al segundo bloque de memoria.
num: Número de bytes a comparar.
Valor de retorno:

Devuelve un valor entero que indica la relación entre los bloques de memoria:
0 si los primeros num bytes de ambos bloques son iguales.
Un valor negativo si el bloque apuntado por ptr1 es menor que el bloque apuntado por ptr2.
Un valor positivo si el bloque apuntado por ptr1 es mayor que el bloque apuntado por ptr2.
La función memcmp compara los bloques de memoria byte a byte. Devuelve un valor entero que indica la relación lexicográfica entre los bloques de memoria. Es útil para comparar datos binarios, como arreglos de bytes, y puede ser utilizado para implementar otras funciones de comparación, como strcmp para cadenas de caracteres.

## ft_strnstr.c

    char *strnstr(const char *haystack, const char *needle, size_t len);

La función strnstr en C se utiliza para encontrar la primera ocurrencia de una subcadena en otra cadena, limitando la búsqueda a los primeros n caracteres de la cadena principal. Es similar a la función strstr, pero agrega un límite al número de caracteres en los que se realizará la búsqueda.

Parámetros:

haystack: La cadena en la que se realizará la búsqueda.
needle: La subcadena que se buscará.
len: El número máximo de caracteres en haystack en los que se realizará la búsqueda.
Valor de retorno:

Devuelve un puntero al comienzo de la primera ocurrencia de needle en haystack si se encuentra.
Devuelve NULL si needle no se encuentra en los primeros len caracteres de haystack.
La función strnstr busca la subcadena needle dentro de la cadena haystack, limitando la búsqueda a los primeros len caracteres de haystack. Devuelve un puntero al inicio de la primera ocurrencia de needle si se encuentra, o NULL si no se encuentra.

Es importante tener en cuenta que strnstr no garantiza que la subcadena encontrada sea completa (es decir, que coincida completamente con needle). Solo garantiza que la subcadena encontrada comienza con needle y está dentro de los primeros len caracteres de haystack. Si necesitas una coincidencia completa, deberás verificar la longitud de la subcadena encontrada después de llamar a strnstr.

## ft_atoi 

    int	ft_atoi(const char *str)

La función atoi en C se utiliza para convertir una cadena de caracteres que representa un número en su equivalente entero. La conversión se detiene cuando se encuentra el primer carácter que no es un dígito o cuando se alcanza el final de la cadena.

Parámetros:

str: La cadena de caracteres que se va a convertir en un entero.
Valor de retorno:

Devuelve el valor entero correspondiente a la cadena de caracteres. Si la cadena no representa un número válido, la función devuelve 0.
La función atoi analiza la cadena str y devuelve el valor entero correspondiente. Ignora los espacios en blanco iniciales y convierte los caracteres numéricos consecutivos hasta que encuentra un carácter que no es un dígito o llega al final de la cadena. Si la cadena comienza con un signo negativo ('-') o un signo positivo ('+'), estos son interpretados como parte del número. Si la cadena no representa un número válido, la función devuelve 0.

## ft_calloc

    void	*ft_calloc(size_t count, size_t size)

La función calloc en C se utiliza para asignar memoria para un arreglo de elementos y establecer todos sus bytes en cero. Es especialmente útil cuando necesitas asignar memoria para estructuras de datos dinámicas, como arreglos o matrices, y quieres inicializar todos sus elementos en cero.

Parámetros:

num_elements: Número de elementos que se desean asignar en memoria.
element_size: Tamaño en bytes de cada elemento.
Valor de retorno:

Devuelve un puntero al inicio del bloque de memoria asignado si la asignación de memoria tiene éxito.
Devuelve NULL si la asignación de memoria falla.
La función calloc realiza las siguientes operaciones:

Calcula el tamaño total de memoria necesario multiplicando num_elements por element_size.
Asigna dinámicamente memoria suficiente para contener num_elements elementos, cada uno de tamaño element_size.
Inicializa todos los bytes del bloque de memoria asignado en cero.
Devuelve un puntero al inicio del bloque de memoria asignado.
Es importante recordar que la memoria asignada por calloc debe liberarse explícitamente utilizando la función free cuando ya no sea necesaria para evitar fugas de memoria.

## ft_strdup

    char	*ft_strdup(const char *s1)

La función strdup en C se utiliza para duplicar una cadena de caracteres. Toma una cadena de caracteres como entrada y devuelve un nuevo puntero a una copia de esa cadena. Es importante destacar que strdup asigna memoria dinámicamente para la nueva cadena, por lo que es responsabilidad del programador liberar esta memoria cuando ya no se necesite utilizando la función free.

Parámetro:

s: Puntero a la cadena de caracteres que se desea duplicar.
Valor de retorno:

Devuelve un puntero a una nueva cadena de caracteres que es una copia de s.
Devuelve NULL si la asignación de memoria falla o si s es NULL.
La función strdup realiza las siguientes operaciones:

Calcula la longitud de la cadena s.
Asigna dinámicamente memoria suficiente para almacenar una copia de la cadena s más el carácter nulo de terminación.
Copia la cadena s original en la memoria recién asignada.
Devuelve un puntero al inicio de la nueva cadena duplicada.
# 42-libft
