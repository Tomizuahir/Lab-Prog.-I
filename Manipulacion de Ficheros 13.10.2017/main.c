#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num=20;
    float flot=2.2;
    char nombre[]={"HOLA"};

    FILE* f;//Debemos crear una estructura FILE con puntero a la misma para manipular archivos

    f=fopen("Prueba.txt","a");/*fopen abre archivos, argumento primero es ruta,nombre y extension.
                                Argumento segundo, el modo de apertura. w-escritura caracteres, wb-escritura binaria
                                a-append de archivos agrega contenido r-lectura caracteres rb-lectura binario*/

    if(f==NULL)//Si el puntero contiene NULL es porque ocurrio un error al intentar manipular el archivo
    {
        printf("ERROR > No se pudo escribir el archivo.");
        exit(1);
    }

    fprintf(f,"\n%d",num);/*fprintf casi identico al printf pero para archivos. Primer argumento es el puntero al
                               archivo que se esta trabajando. Segundo argumento es el texto o datos de variables en cuestion.*/
    fprintf(f,"\n%f",flot);/*fprintf casi identico al printf pero para archivos. Primer argumento es el puntero al
                               archivo que se esta trabajando. Segundo argumento es el texto o datos de variables en cuestion.*/
    fprintf(f,"\n%s",nombre);
    printf("Escritura correcta del archivo. Se cerrara el programa.");
    fclose(f);//Los archivos deben cerrarse cuando no se utilizan. Para esto funcion fclose y puntero al archivo como argumento.

    return 0;
}

