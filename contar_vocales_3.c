/*
 * Archivo:contar_vocales_3
 * Descripcion: ejemplo que muestra como contar vocales utilizando la sentencia switch, pero ahora 
 *              utiliza bandera, la sentencia for, define una constante y convierte todos los caracteres
				ingresados a minuscula utilizando la funcion tolower de la libreria ctype.h.
 */
#define CANTIDAD 5

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv) {
    int ca=0,ce=0,ci=0,co=0,cu=0;
    char c;
    int cont;
    int existeVocal=0;
    for(cont=1;cont<=CANTIDAD;cont++)
        {
        printf("Ingrese un caracter:");
        scanf("%c",&c);
        getchar();
        c=tolower(c);
        
        switch(c)
        {
            case 'a':
                {
                ca++;
                existeVocal=1;
                }
                break;
             case 'e':
                {
                ce++;
                existeVocal=1;
                }
                break;
             case 'i':
                {
                ci++;
                existeVocal=1;
                }
                break;
             case 'o':
                {
                co++;
                existeVocal=1;
                }
                break;
             case 'u':
                {
                cu++;
                existeVocal=1;
                }
                break;
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