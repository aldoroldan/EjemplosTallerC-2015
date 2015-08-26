/*
 * Archivo:cargar_vector3.c
 * Descripcion: ejemplo que muestra como cargar un vector con valores constantes.
 *				
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT_ALUMNOS 4

int main(int argc, char** argv) {
    float notas[CANT_ALUMNOS]={7.5f,8.0f,10.0f,6.5f};
    int i;
    
    printf("El Arreglo generado es:");
    for(i=0;i<CANT_ALUMNOS;i++)
        printf("[%4.2f]",notas[i]);
    
    return (EXIT_SUCCESS);
}
