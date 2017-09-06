#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    //Guarda si continuaremos en el menu
    char seguir='s';

    //Opcion elegida por el usuario
    int opcion;

    //num1 y num2 son los operandos para los calculos. dif_num1 comprueba si el operando 1(num1) es entero o no
    float num1=0,num2=0,dif_num1;

    while(seguir=='s')
    {
        //Menu del programa

        //Limpia la consola
        system("cls");

        //Muestra todas las opciones disponibles
        printf("1- Ingresar 1er operando (A=%.2f)\n",num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        //Pide ingresar una opcion al usuario
        printf("\nOpcion: ");
        scanf("%d",&opcion);

        //Limpia la consola
        system("cls");


        switch(opcion)
        {
        //Segun la opcion ingresada toma una decision
                case 1:
                //1- Ingresar 1er operando (A=x)

                //Ingresa el primer operando
                printf("Operando 1: ");
                scanf("%f",&num1);

                //Comprueba si el primer operando es un entero(para calcular el factorial llegado el caso)
                dif_num1=num1-(int)num1;
                break;
            case 2:
                //2- Ingresar 2do operando (B=y)

                //Ingresa el segundo operando
                printf("Operando 2: ");
                scanf("%f",&num2);
                break;
            case 3:
                //3- Calcular la suma (A+B)
                printf("Resultado de suma (%.2f+%.2f): %.2f\n\n",num1,num2,Sumar(num1,num2));
                system("pause");
                break;
            case 4:
                //4- Calcular la resta (A-B)
                printf("Resultado de resta (%.2f-%.2f): %.2f\n\n",num1,num2,Restar(num1,num2));
                system("pause");
                break;
            case 5:
                //5- Calcular la division (A/B)

                //Si el divisor es cero, no permite efectuar la division, caso contrario, la calcula y la muestra
                if(num2==0)
                {
                    printf("ERROR: No se admite la division por cero. Por favor modifique el Operando 2 ingresando otro valor.\n");
                }
                else
                {
                    printf("Resultado de division (%.2f/%.2f): %.2f\n\n",num1,num2,Dividir(num1,num2));
                }

                system("pause");
                break;
            case 6:
                //6- Calcular la multiplicacion (A*B)
                printf("Resultado de multiplicacion (%.2f*%.2f): %.2f\n\n",num1,num2,Multiplicar(num1,num2));
                system("pause");
                break;
            case 7:
                //7- Calcular el factorial (A!)

                //Comprueba que el numero para el factorial sea natural, y entero. De no serlo no permite el calculo
                if(num1<1 || dif_num1!=0)
                {
                    printf("ERROR: Los factoriales deben ser con numeros naturales (enteros y positivos). A continuacion modifique el valor del operando 1 antes de elegir esta opcion.\n");
                }
                else
                {
                    printf("Resultado de Factorial (%.0f!): %d\n\n",num1,Factorial((int)num1));
                }
                system("pause");
                break;
            case 8:
                //8- Calcular todas las operacione

                //Operacion de la opcion 3
                printf("Resultado de suma (%.2f+%.2f): %.2f\n\n",num1,num2,Sumar(num1,num2));

                //Operacion de la opcion 4
                printf("Resultado de resta (%.2f-%.2f): %.2f\n\n",num1,num2,Restar(num1,num2));

                //Operacion de la opcion 5

                //Si el divisor es cero, no permite efectuar la division, caso contrario, la calcula y la muestra
                if(num2==0)
                {
                    printf("ERROR: No se admite la division por cero. Por favor modifique el Operando 2 ingresando otro valor.\n\n");
                }
                else
                {
                    printf("Resultado de division (%.2f/%.2f): %.2f\n\n",num1,num2,Dividir(num1,num2));
                }

                //Operacion de la opcion 6
                printf("Resultado de multiplicacion (%.2f*%.2f): %.2f\n\n",num1,num2,Multiplicar(num1,num2));

                //Operacion de la opcion 7

                //Comprueba que el numero para el factorial sea natural, y entero. De no serlo no permite el calculo
                if(num1<1 || dif_num1!=0)
                {
                    printf("ERROR: Los factoriales deben ser con numeros naturales (enteros y positivos). A continuacion modifique el valor del operando 1 antes de elegir esta opcion.\n\n");
                }
                else
                {
                    printf("Resultado de Factorial (%.0f!): %d\n\n",num1,Factorial((int)num1));
                }

                system("pause");
                break;
            case 9:
                //9- Salir
                seguir='n';
                break;
            default:
                //Si la opcion ingresada no es valida, lo avisa y a continuacion, repetira el menu y pedira reingresar una opcion
                printf("ERROR: Opcion no valida.\n\n");
                system("pause");
        }
    }
    return 0;
}
