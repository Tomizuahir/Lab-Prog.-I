#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vec;//Definimos un puntero
    int* aux;//Puntero auxiliar para evitar perder valores de memoria si la redimension del vector resultara nula
    vec=(int*)malloc(5*sizeof(int));/*Asigna memoria dinamica al puntero. malloc(cantidad de bytes de memoria a reservar)
    Si no se consigue memoria devuelve NULL, caso contrario, devuelve la direccion de memoria en donde comienza el vector.*/

    if(vec==NULL){
        printf("No se consiguio memoria.");
        exit(1); //Termina el programa.
    }

    for(int i=0;i<5;i++){
        printf("Ingrese un numero: ");
        scanf("%d",(vec+i));
    }

    for(int i=0;i<5;i++){
        printf("%d",*(vec+i));
    }
    printf("\n");

    /*realloc (vector puntero a redimensionar, cantidad de bytes de memoria a reservar). /*Devuelve NULL si no consigue,caso
    contrario devuelve la direccion de memoria*/

    aux=(int*)realloc(vec,10*sizeof(int));

    if(aux!=NULL){ //Si se consiguio memoria para realloc, le copiamos el auxiliar.
        vec=aux;
    }

    /*for(int i=5;i<10;i++){
        printf("%d",*(vec+i));
    }
    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d",*(vec+1));
    }
    printf("\n");*/

    free(vec);//Libera la memoria que ocupaba vec(aun cuando el programa este cerrado, se debe liberar porque es espacio que queda ocupado.
    return 0;
}
