#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validarCadena(char[], int);
void mostrarNombres(char[][32],int);
void mostrarNombre(char[]);
void ordenarCadenas(char[][32],int);

int main()
{
    char nombres[5][32],buffer[128];

    for(int i=0;i<=4;i++)
    {
        printf("Ingrese nombre: ");
        gets(buffer);

        while(!validarCadena(buffer,32))
        {
            printf("ERROR > Ingrese nombre: ");
            gets(buffer);
        }

        strcpy(nombres[i],buffer);
    }

    ordenarCadenas(nombres,5);
    mostrarNombres(nombres,5);

    system("pause");

    system("cls");

    for(int i=0;i<5;i++)
    {
        mostrarNombre(nombres[i]);
    }

    system("pause");

    return 0;
}

int validarCadena(char cadena[], int long_cadena)
{
    int valor=0;

    if(strlen(cadena)<long_cadena)
    {
        valor=1;
    }

    return valor;
}

void mostrarNombres(char f_nombres[][32],int a)
{
    for (int i=0; i<a; i++)
    {
        printf("%s\n",f_nombres[i]);
    }
}

void mostrarNombre(char f_nombres[])
{
    printf("%s\n",f_nombres);
}

void ordenarCadenas(char f_nombres[][32], int filas)
{
    char oC_buffer[32];

    for(int i=0; i < filas-1; i++)
    {
         for(int j= i+1; j < filas; j++)
         {
                if(strcmp(f_nombres[i],f_nombres[j])>0)
                {
                    strcpy(oC_buffer,f_nombres[i]);
                    strcpy(f_nombres[i],f_nombres[j]);
                    strcpy(f_nombres[j],oC_buffer);
                }
         }
    }
}
