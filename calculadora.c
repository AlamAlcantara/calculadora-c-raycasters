#include <stdio.h>
#include "calculadora.h"

void sumar(float a, float b)
{
    float result = a + b;
    printf("%f + %f = %f \n", a, b, result);
}

void restar(float a, float b)
{
    float result = a - b;
    printf("%f - %f = %f \n", a, b, result);
}

void dividir(float a, float b)
{
    if(b == 0){
        printf("No se puede dividir entre 0. \n");
        return;
    }

    double result = a / b;
    printf("%f / %f = %f \n", a, b, result);
}

void multiplicar(float a, float b)
{
    float result = a * b;
    printf("%f * %f = %f \n", a, b, result);
}
