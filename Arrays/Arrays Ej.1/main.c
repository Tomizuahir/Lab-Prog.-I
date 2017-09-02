#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Vector de 10 elementos, numero ingresado a buscar y la bandera de haberlo hallado
    int numeros[]={10,20,30,40,50,60,70,80,90,100}, unum, flag_num;

    //Nos pregunta que numero queremos ingresar para la busqueda
    printf("Ingrese numero que desea buscar en el array: ");
    scanf("%d",&unum);

    //Borra la pantalla
    system("cls");

    //Bandera que indica si encontramos el resultado. Comienza con resultado negativo.
    flag_num=0;

    //Buscamos en todos los elementos del vector, o hasta que el numero a buscar sea hayado por lo menos una vez
    for(int i=0;i<10;i++)
    {
        //Si el numero a buscar esta en el vector, marcamos la bandera, avisamos haberlo encontrado y salimos de la iteracion inmediatamente
        if(numeros[i]==unum)
        {
            flag_num=1;
            printf("El numero %d fue encontrado al menos una vez. Posicion: %d.\n",unum,i+1);
            break;
        }
    }

    //En caso de haber recorrido todos los elementos del vector sin encontrar el numero, avisamos que no se encuentra en el array.
    if(flag_num==0)
    {
        printf("El numero %d no existe dentro del array.\n",unum);
    }

    //Pausa en la consola.
    system("pause");

    return 0;
}
