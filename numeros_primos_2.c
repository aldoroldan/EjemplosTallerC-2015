/*
 * Archivo:numeros_primos
 * Descripcion: ejemplo que determina si un numero es primo o no. En el se muestran los distintos operadores enteros, logicos y relacionales, 
			    asi tambien como el uso de bandera.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numero;
    int divisor;
    int existeDivisor;
    
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    existeDivisor=0;
    divisor=2;  
    while((divisor <= (numero/2))&&(!existeDivisor))
        if((numero % divisor)==0)
            existeDivisor=1;
		else
			divisor++;
    
    if(!existeDivisor)
        printf("El numero %d es primo\n",numero);
    else
        printf("El numero %d NO ES PRIMO\n",numero);
    return (EXIT_SUCCESS);
}
