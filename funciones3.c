/*
 * Archivo:funciones3.c
 * Descripcion: ejemplo que muestra como definir e implementar funciones con parametros por referencia, asi tambien como 
 *              la forma de convocarla	 
 */

#include <stdio.h>
#include <stdlib.h>

void LeerNumero(int* numero);
void DuplicarNumero(int* numero);
void MostrarNumero(int numero);

int main(int argc, char** argv) {
    int numero=5;
    LeerNumero(&numero);
    printf("El valor ingresado es el ");
    MostrarNumero(numero);
    DuplicarNumero(&numero);
    printf("\nEl valor duplicado es el ");
    MostrarNumero(numero);
    return (EXIT_SUCCESS);
}

void LeerNumero(int* numero){
   int n;
   printf("Ingrese un numero:");
   scanf("%d",&n);
   *numero=n;
}

void DuplicarNumero(int* num){
    *num=((*num)*2);
}

void MostrarNumero(int n){
    printf("%d",n);
}