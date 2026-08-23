#include <stdio.h>
#include "calculadora.h"


int main(void)
{
    int exit = 0;
    int operation = 0;
    int validOptions[5] = {1,2,3,4,5};

    printf("Bienvenido a la calculadora. \n");

    do{
        printf("\nElija la operacion que desea ejecutar: \n");

        printf("1) suma \n");
        printf("2) resta \n");
        printf("3) division \n");
        printf("4) multiplicacion \n");
        printf("5) salir \n");

        int selectedOption;
        scanf("%d", &selectedOption);

        if(selectedOption < 1 || selectedOption > 5){
            printf("Opcion invalida. \n");
            continue;
        }

        if(selectedOption == 5){
            exit = 1;
            break;
        }

        printf("Ingrese el primer numero: \n");

        float firstNumber;
        scanf("%f", &firstNumber);

        printf("Ingrese el segundo numero: \n");

        float secondNumber;
        scanf("%f", &secondNumber);

        switch (selectedOption)
        {
            case 1:
                sumar(firstNumber, secondNumber);
                break;
            case 2:
                restar(firstNumber, secondNumber);
                break;
            case 3:
                dividir(firstNumber, secondNumber);
                break;
            case 4:
                multiplicar(firstNumber, secondNumber);
                break;
            case 5:
                exit = 1;
                break;
            default:
                printf("Opcion invalida. \n");
                
        }

    }while (exit != 1);

    return 0;
}



