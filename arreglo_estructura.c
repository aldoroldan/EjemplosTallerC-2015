/*
 * Archivo:arreglo_estructura.c
 * Descripcion: ejemplo que muestra como definir un arreglo de estructuras(o vector de registros) y su utilizacion
 *              La carga se realiza con un registro simple que despues se asigna a una posicion del arreglo
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
    TInfo a;
    TInfo inf[MAX];
    int i;
    for(i=0;i<MAX;i++)
        {
        printf("Ingrese el Codigo de Publicacion:");
        scanf("%d",&a.codigoPublicacion);
        printf("Ingrese el Autor:");
        getchar();
        gets(a.autor);
        printf("Ingrese el Tipo de Publicacion:");
        scanf("%d",&a.tipo);
        printf("Ingrese el Dia de Presentacion:");
        scanf("%d",&a.fechaAceptacion.dia);
        printf("Ingrese el Mes de Presentacion:");
        scanf("%d",&a.fechaAceptacion.mes);
        printf("Ingrese el Año de Presentacion:");
        scanf("%d",&a.fechaAceptacion.anio);
        inf[i]=a;
        }
    
    printf("FIN");
    
    return (EXIT_SUCCESS);
}


