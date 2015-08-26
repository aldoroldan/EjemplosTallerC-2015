/*
 * Archivo:cargar_vector2.c
 * Descripcion: ejemplo que muestra como cargar un vector hasta que se cumpla una condicion de fin determinada.
 *				Se muestra ademas el uso de la dimension fisica y de la dimension logica. 
 */
 
#include <stdio.h>
#include <stdlib.h>

#define CANT_ALUMNOS 100

int main(int argc, char** argv) {
    float w[CANT_ALUMNOS];
    float notaAlumno;
    int i;
    int dimLogica=-1;
    
    printf("Ingrese la nota del alumno:(<0 para Terminar)");
    scanf("%f",&notaAlumno);
    while((notaAlumno>=0)&&(dimLogica<CANT_ALUMNOS-1))
        {
        dimLogica++;
        w[dimLogica]=notaAlumno;
        printf("Ingrese la nota del alumno:(<0 para Terminar)");
        scanf("%f",&notaAlumno);
        }

    printf("El Arreglo generado es:");
    for(i=0;i<=dimLogica;i++)
        printf("[%4.2f]",w[i]);
    
    
    return (EXIT_SUCCESS);
}
