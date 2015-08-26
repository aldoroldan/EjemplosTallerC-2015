/*
 * Archivo:arreglo_estructura2.c
 * Descripcion: ejemplo que muestra como definir un arreglo de estructuras, su carga y acceso a los distintos campos
 *              En este caso la carga se realiza directamente sobre el arreglo
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct fecha TFecha;
typedef struct info TInfo;

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct info{
    int codigoPublicacion;
    char autor[20];
    TFecha fechaAceptacion;
    int tipo;
};

int main(int argc, char** argv) {
    TInfo inf[MAX];
    int i;
    for(i=0;i<MAX;i++)
        {
        printf("Ingrese el Codigo de Publicacion:");
        scanf("%d",&inf[i].codigoPublicacion);
        printf("Ingrese el Autor:");
        getchar();
        gets(inf[i].autor);
        printf("Ingrese el Tipo de Publicacion:");
        scanf("%d",&inf[i].tipo);
        printf("Ingrese el Dia de Presentacion:");
        scanf("%d",&inf[i].fechaAceptacion.dia);
        printf("Ingrese el Mes de Presentacion:");
        scanf("%d",&inf[i].fechaAceptacion.mes);
        printf("Ingrese el Año de Presentacion:");
        scanf("%d",&inf[i].fechaAceptacion.anio);
        }
    
    printf("EL arreglo ingresado fue:\n");
     for(i=0;i<MAX;i++)
        {
        
        printf("Codigo de Publicacion:%d\n",inf[i].codigoPublicacion);
        printf("Autor: %s\n",inf[i].autor);
        
        printf("Tipo de Publicacion: ");
        switch(inf[i].tipo){
            case 1:{
                    printf("Poster\n");
                    break;
                    }
            case 2:{
                    printf("Ponencia\n");
                    break;
                    }
            case 3:{
                    printf("Taller\n");
                    break;
                    }
        }

        printf("Fecha de Presentacion: %2d/%2d/%2d\n",inf[i].fechaAceptacion.dia,
                inf[i].fechaAceptacion.mes,inf[i].fechaAceptacion.anio);
        }
    
    printf("FIN");
    
    return (EXIT_SUCCESS);
}
