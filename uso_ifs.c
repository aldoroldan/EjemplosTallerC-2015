/*
 * Archivo: uso_ifs
 * Descripcion: ejemplo que muestra la utilizacion de la sentencia if, y los operadores
 *              relaciones
 */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int a,b;
    
    int ban=0;
    
    printf("Ingrese un valor para a:");
    scanf("%d",&a);
    
    printf("Ingrese un valor para b:");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("a es el mayor\n");
        ban=1;
    }
    else
        if(a==b)
            printf("a es igual que b\n");
        else
            printf("b es el mayor\n");
    
    if(ban==1)
        printf("El valor de a es %d\n",a);
    
    return (EXIT_SUCCESS);
}
