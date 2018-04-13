#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
int main()
{
    char seguir='s';
    int opcion;
    float x;
    float y;
    float resultado;
    int pusonumeroUno=0;
    int pusonumeroDos=0;

    while(seguir=='s')
    {
        if(pusonumeroUno==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n",x);
        }
        if(pusonumeroDos==0)
        {
        printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n",y);
        }
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n\n");
        printf("Ingrese opcion: ");
        scanf("%d",&opcion);

        system("cls");

        switch(opcion)
        {
        case 1:
            x=numero();
            system("cls");
            printf("El numero es:%f\n\n",x);
            pusonumeroUno=1;
            break;
        case 2:
            y=numero();
            system("cls");
            printf("El numero es:%f\n\n",y);
            pusonumeroDos=1;
            break;
        case 3:
            resultado=suma(x,y);
            system("cls");
            printf("El resultado de la suma es %f\n\n", resultado);
            break;
        case 4:
            resultado=resta (x, y);
            system("cls");
            printf("El resultado de la resta es %f\n\n", resultado);
            break;
        case 5:
            if(y != 0)
            {
            resultado=division (x, y);
            system("cls");
            printf("El resultado de la division es %f\n\n", resultado);
            }
            else
            {
                system("cls");
                printf("NO se puede dividir por 0\n\n");
            }
            break;
        case 6:
            resultado=multiplicacion (x, y);
            system("cls");
            printf("El resultado de la multiplicacion es %f\n\n", resultado);
            break;
        case 7:
            if (x >= 0)
            {
                resultado=factorial(x);
                system("cls");
                printf("El resultado del factorial de %f es %f\n\n", x, resultado);
            }
            else
            {
                system("cls");
                printf("NO se puede saca el factorial de un numero negativo\n\n");
            }
            break;
        case 8:
            resultado=suma(x,y);
            system("cls");
            printf("El resultado de la suma es %f\n\n", resultado);

            resultado=resta (x, y);
            printf("El resultado de la resta es %f\n\n", resultado);

            resultado=division (x, y);
            printf("El resultado de la division es %f\n\n", resultado);

            resultado=multiplicacion (x, y);
            printf("El resultado de la multiplicacion es %f\n\n", resultado);

            resultado=factorial(x);
            printf("El resultado del factorial de %f es %f\n\n", x, resultado);
            break;
        case 9:
            seguir = 'n';
            break;

        default:
            printf("Ingrese una opcion del menu\n\n");

        }
    }

}
