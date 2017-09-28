#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Codigo extraido del video https://www.youtube.com/watch?v=OW1TqB6Xzdw de CODE UTN FRA
int esNumerico(char str[]){
    int i=0;

    while(str[i]!='\0'){
        if(str[i]<'0' || str[i]>'9')
            return 0;
        i++;
    }
    return 1;
}

//Codigo extraido del video https://www.youtube.com/watch?v=OW1TqB6Xzdw de CODE UTN FRA
int esSoloLetras(char str[]){
    int i=0;

    while(str[i]!='\0'){
        if((str[i]!=' ') && (str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z'))
            return 0;
        i++;
    }
    return 1;
}

//REVISAR ESTA MAL Codigo extraido del video https://www.youtube.com/watch?v=OW1TqB6Xzdw de CODE UTN FRA
int esAlfaNumerico(char str[]){
    int i=0;

    while(str[i]!='\0'){
        if((str[i]!=' ') && (str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z') && (str[i]<'0' || str[i]>'9'))
            return 0;
        i++;
    }
    return 1;
}

//Codigo extraido del video https://www.youtube.com/watch?v=OW1TqB6Xzdw de CODE UTN FRA
int esTelefono(char str[]){
    int i=0;
    int contadorGuiones=0;

    while(str[i]!='\0'){
        if((str[i]!=' ') && (str[i]!='-') && (str[i]<'0' || str[i]>'9'))
            return 0;
        if(str[i]=='-')
            contadorGuiones++;
        i++;
    }

    if(contadorGuiones==0 || contadorGuiones==2)
        return 1;
    return 0;
}
