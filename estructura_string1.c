/*
 * Archivo:estructura_string1.c
 * Descripcion: ejemplo que muestra como utilizar un campo string en un arreglo de estructuras, su carga y utilizacion.
 *	            Tambien se muestra el uso de la funcion strlen de la biblioteca string.h		
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
    TPersona a[MAX];
    int i, mayor, cantCaracteres, posicion;
    /*Carga del Arreglo*/
    for(i=0;i<MAX;i++){
        printf("Dni:");
        scanf("%ld",&a[i].dni);
        getchar();
        printf("Apellido:");
        gets(a[i].apellido);
        printf("Nombres:");
        gets(a[i].nombres);
    }
    
    /*Determinacion del Apellido mas largo*/
    mayor=-1;
    posicion=-1;
    for(i=0;i<MAX;i++){
        cantCaracteres=strlen(a[i].apellido);
        if(cantCaracteres>mayor){
            mayor=cantCaracteres;
            posicion=i;
        }
    }
    
    printf("EL apellido mas largo es %s con %d caracteres\n",a[posicion].apellido,mayor);
    
    return (EXIT_SUCCESS);
}