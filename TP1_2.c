#include <stdio.h>

float cuadrado(float a);
void cuadradoVoid(float *a);
void direccionContenido(float a);
void invertir(float *a, float *b);
void orden(float *a, float *b);

void main(){
    float variable1, variable2;
    float *pun1, *pun2;

    pun1 = &variable1;
    pun2 = &variable2;

    printf("Ingrese dos números\n\n");
    printf("Ingrese el primer número:");
    scanf("%f", &*pun1);
    printf("Ingrese el segundo número:");
    scanf("%f", &*pun2);
    

    printf("\nVariable: %.2f -- Cuadrado: %.2f\n", variable1, cuadrado(variable1));
    direccionContenido(variable1);
    printf("Variable: %.2f -- Cuadrado: %.2f\n", variable2, cuadrado(*pun2));
    direccionContenido(variable2);
    printf("Variables ingresadas: a = %.2f, b = %.2f\n", variable1, variable2);
    invertir(pun1, pun2);
    printf("Valores invertidos: a = %.2f, b = %.2f\n", variable1, variable2);
    orden(pun1, pun2);
    printf("Valores ordenados de menor a mayor: %.2f, %.2f\n", variable1, variable2);
    

}

float cuadrado(float a){
    return a*a;
};
void cuadradoVoid(float *a){
    *a = *a**a;
};
void direccionContenido(float a){
    printf("Dirección de memoria de la variable: %p\n", &a);
    printf("Contenido de la variable: %.2f\n\n", a);

};
void invertir(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
};

void orden(float *a, float *b){
    if(*b < *a){
        float c;
        c = *a;
        *a = *b;
        *b = c;
    }
};