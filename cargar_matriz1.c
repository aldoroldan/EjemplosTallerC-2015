
/*
 * Archivo:cargar_matriz1.c
 * Descripcion: ejemplo que muestra como cargar y mostrar una matriz. 
 */

 #include <stdio.h>
#include <stdlib.h>

#define CANT_FILAS 3
#define CANT_COLUMNAS 3

int main(int argc, char** argv) {
    int m[CANT_FILAS][CANT_COLUMNAS];
    int i,j;
    for(i=0;i<CANT_FILAS;i++)
        {
        printf("Ingrese los datos de la fila %d\n",i+1);
        for(j=0;j<CANT_COLUMNAS;j++)
            {
            printf("Ingrese el elemento [%d][%d]:",i,j);
            scanf("%d",&m[i][j]);
            }
        }
    
    printf("La matriz generada es:\n");
    for(i=0;i<CANT_FILAS;i++)
        {
        for(j=0;j<CANT_COLUMNAS;j++)
            printf("[%4d]",m[i][j]);
        printf("\n");
        }
    
    return (EXIT_SUCCESS);
}

