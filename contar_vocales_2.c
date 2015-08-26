/*
 * Archivo:contar_vocales_2
 * Descripcion: ejemplo que muestra como contar vocales utilizando ifs, pero ahora 
 *              utiliza bandera y la sentencia for.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int ca=0,ce=0,ci=0,co=0,cu=0;
    char c;
    int cont;
    int existeVocal=0;
    for(cont=1;cont<=5;cont++)
        {
        printf("Ingrese un caracter:");
        scanf("%c",&c);
        getchar();
        
        //printf("El valor numerico de %c es %d\n",c,c);
        if(c=='a')
            {
            ca++;
            existeVocal=1;
            }
        else
            if(c=='e')
                {
                ce++;
                existeVocal=1;
                }
            else
                if(c=='i')
                    {
                    ci++;
                    existeVocal=1;
                    }
                else
                    if(c=='o')
                        {
                        co++;
                        existeVocal=1;
                        }
                    else
                        if(c=='u')
                            {
                            cu++;
                            existeVocal=1;
                            }
        }
 
    if(existeVocal)
        {
        printf("La cantidad de letras a es=%d\n",ca);
        printf("La cantidad de letras e es=%d\n",ce);
        printf("La cantidad de letras i es=%d\n",ci);
        printf("La cantidad de letras o es=%d\n",co);
        printf("La cantidad de letras u es=%d\n",cu);
        }
    else
        printf("No se ingresaron vocales");
    return (EXIT_SUCCESS);
}