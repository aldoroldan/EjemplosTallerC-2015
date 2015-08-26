/*
 * Archivo: factorial
 * Descripcion: ejemplo que muestra el algoritmo del factorial, la utilizacion
 * de la sentencia while, y el operador de autodecremento.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    
    int nro, nroaux,f;
    
    printf("Ingrese el numero que le desea calcular el factorial:");
    scanf("%d",&nro);
    
    f=1;
    nroaux=nro;
    
    while(nroaux>1)
    {
     f=f*nroaux;
     nroaux--;
    }
    
    printf("El factorial de %d es %d",nro,f);
    
    return (EXIT_SUCCESS);
}
