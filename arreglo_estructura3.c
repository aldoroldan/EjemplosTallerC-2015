/*
 * Archivo:arreglo_estructura3.c
 * Descripcion: ejemplo que muestra como definir un arreglo de estructuras, su carga y acceso a los distintos campos
 *              En este caso, la estructura tiene como campo un arreglo que solo se carga hasta el quinto elemento y no hasta el final. 
 *              La definicion de la misma corresponde al ejercicio:
 * "Un hotel registra la siguiente información para cada una de sus  100 habitaciones: número de habitación, tipo (simple, doble, triple, suite),
 * precio por día, estado (ocupado, disponible). 
 * Mostrar:
 *  a) Los datos de las habitaciones disponibles.
 *  b) La liquidación de una determinada habitación, teniendo en cuenta la cantidad de días ocupados."
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct habitacion THabitacion;

/*
 
 */
struct habitacion{
    int numeroHabitacion;
    int tipoHabitacion;
    float precioPorDia;
    int estado;
    int ocupacion[30];
};

int main(int argc, char** argv) {
    THabitacion hotel[MAX];
    int i,j;
    for(i=0;i<MAX;i++)
        {
        printf("Ingrese el Numero de Habitacion:");
        scanf("%d",&hotel[i].numeroHabitacion);
        printf("Ingrese el Tipo de Habitacion(1:simple-2:doble-3:triple-4:suite");
        getchar();
        scanf("%d",&hotel[i].tipoHabitacion);
        
        for(j=0;j<5;j++)
            {
            printf("Ingrese la ocupacion del dia %d:",j+1);
            scanf("%d",&hotel[i].ocupacion[j]);    
            }
        }
    printf("FIN");
    
    return (EXIT_SUCCESS);
}

