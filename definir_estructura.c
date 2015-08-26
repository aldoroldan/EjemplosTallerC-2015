/*
 * Archivo:definir_estructura.c
 * Descripcion: ejemplo que muestra como definir una estructura(registro), declararlo y proceder a la carga del mismo. 
 *              A su vez muestra como definir referenciar una estructura dentro de otra estructura y el acceso a los
 *              campos miembros.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    TInfo a,b;
    TFecha c;
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
    
    b=a;
    c=a.fechaAceptacion;
    
    printf("FIN");
    
    return (EXIT_SUCCESS);
}