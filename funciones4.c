/*
 * Archivo:funciones4.c
 * Descripcion: ejemplo que muestra como definir e implementar funciones que se pasen arreglos como parametros.	 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void MostrarArreglo(int arreglo[MAX]);
void CargarArreglo(int arreglo[MAX]);

int main(int argc, char** argv) {
    int a[MAX]={1,2,3,4,5};
    MostrarArreglo(a);
    CargarArreglo(a);
    MostrarArreglo(a);
    return (EXIT_SUCCESS);
}

void MostrarArreglo(int arreglo[MAX]){
    int i;
    for(i=0;i<MAX;i++)
        printf("[%d]",arreglo[i]);
    printf("\n");
}

void CargarArreglo(int arreglo[MAX]){
    int i;
    for(i=0;i<MAX;i++){
        printf("Ingrese a[%d]:",i+1);
        scanf("%d",&arreglo[i]);
    }
}