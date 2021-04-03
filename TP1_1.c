#include <stdio.h>

void main(){
    int *pPun, variable = 3;
    pPun = &variable;


    printf("Contenido del puntero: %d \n", *pPun);
    printf("Dirección de memoria almacenada por el puntero: %p \n", pPun);
    printf("Dirección de memoria de la variable: %p\n", &variable);
    printf("Dirección de memoria del puntero: %p\n", &pPun);
    printf("Tamaño de memoria utilizado por la variable: %d", sizeof(variable));
}