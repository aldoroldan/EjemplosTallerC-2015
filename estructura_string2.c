/*
 * Archivo:estructura_string2.c
 * Descripcion: ejemplo que muestra como utilizar un campo string en un arreglo de estructuras, su carga constante y utilizacion.
 *	            Tambien se muestra el uso de las funciones strcat, strcpy de la biblioteca string.h y el algoritmo de ordenamiento de burbuja		
 */

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 3

typedef struct persona TPersona;

struct persona{
    long int dni;
    char apellido[20];
    char nombres[20];
};

int main(int argc, char** argv) {
    TPersona a[MAX]= {
        {1, "Zerda", "Luis"},
        {2, "Alvarez", "Juan"},
        {3, "Alvarez", "Daniel"}
    };
    
    int i,j;
    int ordenado;
    char apeyNom1[40],apeyNom2[40];
    TPersona aux;
    
    /*Ordeno el Arreglo por Apellido y Nombre*/
    i=MAX;
    do {
        ordenado=1;
        for(j=0; j<i-1;j++){
           strcpy(apeyNom1,a[j].apellido);
           strcat(apeyNom1," ");
           strcat(apeyNom1,a[j].nombres);
           
           
           strcpy(apeyNom2,a[j+1].apellido);
           strcat(apeyNom2," ");
           strcat(apeyNom2,a[j+1].nombres);
           
           if(strcmp(apeyNom1,apeyNom2)>0){
               ordenado=0;
               aux=a[j];
               a[j]=a[j+1];
               a[j+1]=aux;
           }
           
        }
        i--;    
    } while(!ordenado);
    
    /*Muestro el Arreglo Resultante*/
    printf("\tDni\t\t Apellido y Nombre\n");
    printf("\t---\t\t -----------------\n");
    for(i=0;i<MAX;i++){
        printf("\t%d\t\t%s %s\n",a[i].dni,a[i].apellido,a[i].nombres);
    }
    
    return (EXIT_SUCCESS);
}