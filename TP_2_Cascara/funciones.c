#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[],int tamLista)
{
    int idLibre=-1;

    for(int i=0;i<tamLista;i++)
    {
        if(lista[i].estado==0)
        {
            idLibre=i;
            break;
        }
    }

    return idLibre;
}

int buscarPorDni(EPersona lista[], int dni,int tamLista)
{
    int idDNI=-1;

    for(int i=0;i<tamLista;i++)
    {
        if(lista[i].estado==1 && lista[i].dni==dni)
        {
            idDNI=i;
        }
    }

    return idDNI;
}
