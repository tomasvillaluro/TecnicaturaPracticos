#include "funcion.h"
#include <stdio.h>

float numero(void)
{
    float num;
    printf("Ingrese numero:");
    scanf("%f", &num);
    return num;
}

float suma(float a, float b)
{
    float resultado = a + b;
    return resultado;
}

float resta(float a, float b)
{
    float resultado = a - b;
    return resultado;
}

float multiplicacion(float a, float b)
{
    float resultado = a * b;
    return resultado;
}

float division(float x, float y)
{
    return(x/y);
}

float factorial(float n)
{
    int i;
    float fact=1;
    if (fact ==0)
    {
        fact=1;
    }
    else
    {
    for(i=1; i <=n; i++)
    {
        fact*=i;
    }
    }
    return fact;
}

