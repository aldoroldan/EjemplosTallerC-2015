/* 
 * Archivo:   enteros_flotantes
 * Funcion: Ejemplo que sirve para mostrar el tipo de dato entero y sus operadores, asi tambien como
 *          tambien el ingreso y egreso de informacion utilizando las funciones printf y scanf.
 *          Ademas, se muestra el tipo de dato float, las conversiones explicitas y la mascara 
 *          para su uso.
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {

    int a,b;
    float c;
    printf("Ingrese el valor de a:");
    scanf("%d",&a);
    printf("Ingrese el valor de b:");
    scanf("%d",&b);
    
    c= (float)a/b;
    printf("El valor de a+b=%d\n",a+b);
    printf("El valor de a/b=%d\n",a/b);
    printf("El valor de a%b=%d\n",a%b);
    printf("El valor de a++=%d\n",a+1);
    printf("El valor de a=%d\n",a++);
    printf("El valor de c=%f\n",c);
    return (EXIT_SUCCESS);
}

