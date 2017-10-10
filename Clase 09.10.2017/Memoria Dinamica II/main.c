#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int cant;
    char *nombre;
    char auxcad[50];

    printf("Ingrese nombre: ");
    gets(auxcad);
    cant=strlen(auxcad);

    nombre=(char*)malloc((cant+1)*sizeof(char));

    if(nombre!=NULL){
        strcpy(nombre,auxcad);
    }

    return 0;
}
