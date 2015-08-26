/*
 * Archivo:funciones1.c
 * Descripcion: ejemplo que muestra como definir e implementar funciones sin parametros de entrada, con parametros de entrada
 *				y sin retorno de resultados; asi tambien como su convocatoria.	 
 */

#include <stdio.h>
#include <stdlib.h>


void MostrarFecha();
void MostrarValorAbsoluto(int n);

int main(int argc, char** argv) {
    int num;
    MostrarFecha();
    printf("Ingrese un numero:");
    scanf("%d",&num);
    MostrarValorAbsoluto(-10);
    MostrarValorAbsoluto(num);
    MostrarValorAbsoluto(-num*2);
    return (EXIT_SUCCESS);
}

void MostrarFecha(){
 printf("Hoy es 13 de Agosto de 2015");   
}

void MostrarValorAbsoluto(int n){
    int valor;
    if(n<0)
        valor=-n;
    else
        valor=n;
    printf("El valor absoluto de %d es %d\n",n,valor);
}