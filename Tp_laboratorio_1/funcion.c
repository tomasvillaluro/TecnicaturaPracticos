#include "funcion.h"
#include <stdio.h>
/*Función que permite ingresar un numero*/
float numero(void)
{
    float num;
    printf("Ingrese numero:");
    scanf("%f", &num);
    return num;
}
/*Función que permite sumar dos flotantes*/
float suma(float a, float b)
{
    float resultado = a + b;
    return resultado;
}
/*Función que permite restar dos flotantes*/
float resta(float a, float b)
{
    float resultado = a - b;
    return resultado;
}
/*Función que permite multiplicar dos flotantes*/
float multiplicacion(float a, float b)
{
    float resultado = a * b;
    return resultado;
}
/*Función que permite dividor dos flotantes contemplando error*/
float division(float x, float y)
{
    if(y != 0)
        return(x/y);
    else
    {
        printf("NO se puede dividir por 0");
        return 0;
    }
}
/*Función para hallar el factorial de un entero*/
float factorial(float n)
{
    int i;
    float fact=1;
    for(i=1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
}

