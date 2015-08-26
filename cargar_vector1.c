/*
 * Archivo:cargar_vector1.c
 * Descripcion: ejemplo que muestra como cargar un vector a partir de la determinacion del promedio de notas de los alumnos.
 *				Se muestra ademas el uso de constantes, tanto para la declaracion del arreglo como para su recorrido. 
 */


#include <stdio.h>
#include <stdlib.h>

#define CANT_ALUMNOS 4

int main(int argc, char** argv) {
    float w[CANT_ALUMNOS];
    float n1,n2,n3;
    int i;
    
    for(i=0;i<CANT_ALUMNOS;i++)
        {
        printf("Ingrese los datos del alumno %d\n",i+1);
        printf("Ingrese la Nota 1:");
        scanf("%f",&n1);
        printf("Ingrese la Nota 2:");
        scanf("%f",&n2);
        printf("Ingrese la Nota 3:");
        scanf("%f",&n3);
        
        w[i]=(n1+n2+n3)/3;
        }
    
    
    printf("El Arreglo generado es:");
    for(i=0;i<CANT_ALUMNOS;i++)
        printf("[%4.2f]",w[i]);
    
    
    return (EXIT_SUCCESS);
}

