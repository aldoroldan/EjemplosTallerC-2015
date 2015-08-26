/*
 * Archivo:estructura_parcial_tema1.c
 * Descripcion: ejemplo que muestra como implementar la solucion del tema 1 del parcial(incompleta - solo items 1 y 2).
 *				En el se incluye: utilizar un arreglo para obtener la descripcion de un campo codificado. Estructuras anidadas.	
 *				Generacion de una estructura a partir de otras, ordenamiento mediante y listados varios
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 4

typedef struct fecha TFecha;
typedef struct info TInfo;
typedef struct baseDato TBaseDato;

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct info{
    int codigoPublicacion;
    int codigoUniversidad;
    char nombreAutor[20];
    int tipoPublicacion;
    TFecha fechaAceptacion;
    int codigoTema;
    TFecha fechaExposicion;
};

struct baseDato{
    int codigoPublicacion;
    char nombreAutor[20];
    TFecha fechaAceptacion;
    TFecha fechaExposicion;
};

int main(int argc, char** argv) {
    TInfo inf[MAX]={
        {1,1,"Rodriguez A.",2,{27,6,2015},2,{27,6,2015}},
        {2,1,"Luna P.",1,{22,6,2015},2,{27,6,2015}},
        {3,1,"Perez Roldan P.",1,{22,6,2015},2,{27,6,2015}},
        {4,2,"Costas M.",2,{22,6,2015},2,{27,6,2015}}
    };
    TBaseDato bd[MAX];
    char auxUniversidades[][10]={"Tucuman","Cordoba","Santiago"};
    int i,p,j;
    TInfo aux;
    
    /* Generar el registro BD con los datos de los articulos del tema Base de Datos de una determinada
     * Universidad.
     */
    int dimBd=-1;
    int codUniversidad;
    printf("Ingrese el codigo de universidad de la que desea ver los articulos de BD:");
    scanf("%d",&codUniversidad);
    for(i=0;i<MAX;i++)
        {
        if((inf[i].tipoPublicacion==1)&&(inf[i].codigoTema=2)&&(inf[i].codigoUniversidad==codUniversidad)){
            dimBd++;
            bd[dimBd].codigoPublicacion=inf[i].codigoPublicacion;
            strcpy(bd[dimBd].nombreAutor,inf[i].nombreAutor);
            bd[dimBd].fechaAceptacion=inf[i].fechaAceptacion;
            bd[dimBd].fechaExposicion=inf[i].fechaExposicion;
        }
    }
     
     /* Muestro el arreglo generado*/
    printf("Articulos de BD de la Universidad %s\n",auxUniversidades[codUniversidad-1]);
    printf("Cod.Publicacion\tNombre Autor\tF.Aceptacion\tF.Exposicion\n");
     for(i=0;i<=dimBd;i++)
        {
         printf("%8d\t%s\t%d/%d/%d\t%d/%d/%d\n",bd[dimBd].codigoPublicacion,bd[dimBd].nombreAutor,
                 bd[dimBd].fechaAceptacion.dia,bd[dimBd].fechaAceptacion.mes,bd[dimBd].fechaAceptacion.anio,
                 bd[dimBd].fechaExposicion.dia,bd[dimBd].fechaExposicion.mes,bd[dimBd].fechaExposicion.anio);

    }
    /* Ordenar descendentemente la estructura Info por Codigo de Publicacion.
     * Mostrar los datos de las ponencias cuya fecha de exposicion es el dia 27
     */
    for(i=0;i<MAX;i++){
       p=i;
       for(j=i+1;j<MAX;j++){
           if(inf[p].codigoPublicacion<inf[j].codigoPublicacion){
               p=j;
           }
           aux=inf[i];
           inf[i]=inf[p];
           inf[p]=aux;
       }
    } 
         
    /* Muestro el listado de ponencias*/
    printf("\n\n\t\tListado de Ponencias del Dia 27\n");
    printf("\t\t-------------------------------\n");
    printf("Cod.Publicacion\tNombre Autor\t\tUniversidad\tF.Aceptacion\n");
     for(i=0;i<MAX;i++)
        {
         printf("%8d\t%-20s\t%s\t\t%d/%d/%d\n",inf[i].codigoPublicacion,inf[i].nombreAutor,auxUniversidades[codUniversidad-1],
                 bd[dimBd].fechaAceptacion.dia,bd[dimBd].fechaAceptacion.mes,bd[dimBd].fechaAceptacion.anio);

    }
    /* Eliminar de la estructura BD los datos cuya fecha de aceptacion sea posterior a una determinada
     * fecha.
     */
    
    /* Para una determinada Universidad y un Tipo mostrar el ultimo dia que se presentara una publicacion
     * de Ingenieria de Software. Mostrar el porcentaje de poster presentados; la universidad que presento
     * la mayor cantidad de articulos de programacion; y mostrar el tipo de publicacion que tuvo la menor cantidad
     * de publicaciones en el tema Base de Datos.
     */
    
    return (EXIT_SUCCESS);
}


