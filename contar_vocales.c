/*
 * Archivo:contar_vocales
 * Descripcion: ejemplo que muestra como contar vocales utilizando ifs, sin 
 *              utilizar banderas y de la funcion getchar() para limpiar el
 *              buffer. 
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int ca=0,ce=0,ci=0,co=0,cu=0;
    char c;
    int cont=1;
    int cantVocales;
    while(cont<=5)
        {
        printf("Ingrese un caracter:");
        scanf("%c",&c);
        getchar();
        
        //printf("El valor numerico de %c es %d\n",c,c);
        if(c=='a')
            ca++;
        else
            if(c=='e')
                ce++;
            else
                if(c=='i')
                    ci++;
                else
                    if(c=='o')
                        co++;
                    else
                        if(c=='u')
                            cu++;
        cont++;
        }
    
    cantVocales=ca+ce+ci+co+cu;
    if(cantVocales==0)
        printf("No se ingresaron vocales");
    else
        {
        printf("La cantidad de letras a es=%d\n",ca);
        printf("La cantidad de letras e es=%d\n",ce);
        printf("La cantidad de letras i es=%d\n",ci);
        printf("La cantidad de letras o es=%d\n",co);
        printf("La cantidad de letras u es=%d\n",cu);
        }
    
    
    return (EXIT_SUCCESS);
}
