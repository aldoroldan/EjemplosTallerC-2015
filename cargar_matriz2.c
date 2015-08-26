/*
 * Archivo:cargar_matriz2.c
 * Descripcion: ejemplo que muestra como cargar una matriz con valores constantes.
 *				
 */
 
 
#include <stdio.h>
#include <stdlib.h>

#define CANT_LIBROS 20
#define CANT_COLUMNAS 4

int main(int argc, char** argv) {
    float libros[CANT_LIBROS][CANT_COLUMNAS]={{10.0f,12.0f,20.0f,157.99f},
                                              {15.0f,23.0f,10.0f,145.00f},
                                              {20.0f,12.0f,05.0f,319.99f}
                                             };
    int i,dimLibros=2;
    
    printf("La matriz generada es:\n");
    for(i=0;i<=dimLibros;i++)
        {
        printf("Cod. Libro: %.0f\n",libros[i][0]);
        printf("Cod. Autor: %.0f\n",libros[i][1]);
        printf("Cant. Existente: %.0f\n",libros[i][2]);
        printf("Precio: %.2f\n\n",libros[i][3]);
        }
 
    return (EXIT_SUCCESS);
}

