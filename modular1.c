/*
 * Archivo:modular1.c
 * Descripcion: esqueleto del problema 1 para su resolucion en clase. Incluye funciones de carga estatica.	 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_ALQUILER 10
#define MAX_PEL 10
typedef struct pelicula TPelicula;

struct pelicula{
    int codigoPelicula;
    char nombrePelicula[30];
    int genero;
    float precio;
    int estado;
}; 


void CargarAlquiler(int a[][32],int *dim);
void CargarPeliculas(TPelicula a[],int *dim);

int main(int argc, char** argv) {
  TPelicula peliculas[MAX_PEL];
  int alquiler[MAX_ALQUILER][32];
  int dimPel;
  int dimAlq;
  CargarAlquiler(alquiler,&dimAlq);
  CargarPeliculas(peliculas,&dimPel);
  int opcion;
  do
  {
      printf("1.-Mostrar No Disponibilidad de Pelicula\n");
      printf("2.-Mostrar Disponibilida de Pelicula\n");
      printf("3.-Mostrar Informacion de Pelicula\n");
      printf("4.-Informe de Alquileres por Rubro\n");
      printf("5.-Ranking de Peliculas Alquiladas\n");
      printf("6.-Salir del Programa\n");
      printf("      Opcion:");
      scanf("%d",&opcion);
      getchar();
      switch(opcion)
      {
       case 1:
            break;
       case 2:
            break;  
       case 3:
            break;
       case 4:
            break;
       case 5:
            break;
       default:;
       }
  } while(opcion!=6);
    return (EXIT_SUCCESS);
}


void CargarAlquiler(int a[][32],int *dim){
    int b[MAX_ALQUILER][32]={
        {101,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
        {102,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {103,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {104,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
        {201,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0}
    };
    int i,j;
    for (i=0;i<5;i++)
        for(j=0;j<32;j++)
            a[i][j]=b[i][j];
    
    *dim=4;
}

void CargarPeliculas(TPelicula a[],int *dim){
    TPelicula b[MAX_ALQUILER]={{101,"Matrix",5,10,1},
          {102,"Batman",5,15,1},
          {103,"Rey Leon",4,15,1},
          {104,"Frozen",4,15,1},
          {201,"Amor",1,10,0}
        };
    int i;
    for (i=0;i<5;i++)
        a[i]=b[i];
    
    *dim=4;
}
