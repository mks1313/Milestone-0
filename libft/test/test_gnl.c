#include "../includes/libft.h"
#include <stdio.h>

void test_gnl(const char *filename)
{
    int     fd;
    char    *line;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        printf("Error al abrir el archivo\n");
        return;
    }
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Linea leída: %s", line); 
        free(line);
    }
    close(fd);
}

int main(void)
{
    test_gnl("../Makefile");
    //test_gnl("archivo_de_prueba.txt");
    return 0;
}

