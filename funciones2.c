/*
 * Archivo:funciones2.c
 * Descripcion: ejemplo que muestra como definir e implementar funciones que retornan resultados, asi tambien como 
 *              diferentes formas de convocarla	 
 */

#include <stdio.h>
#include <stdlib.h>

int Impar(int numero);
int Par(int numero);

int main(int argc, char** argv) {
    int resultado;
    int n;  
    printf("Ingrese un numero:");
    scanf("%d",&n);
    
    printf("El numero 7 es %d\n",Impar(7));
    
    if(Impar(n)==1)
        printf("El %d es impar\n",n);
    else
        printf("El %d es par\n",n);
    
    if(Impar(n))
         printf("El %d es impar\n",n);
    else
        printf("El %d es par\n",n);
    
    resultado=Impar(n);
    if(resultado==1)
        printf("El %d es impar\n",n);
    else
        printf("El %d es par\n",n);
    
    return (EXIT_SUCCESS);
}

int Impar(int numero){
    int v;
    v=0;
    if((numero%2)!=0)
        v=1;
    
    return v;
}

int Par(int numero){
    return((numero%2)==0);
}