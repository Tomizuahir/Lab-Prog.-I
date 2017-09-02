#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Cuatro vectores de 5 elementos. Una variable auxiliar para calcular el promedio a guardar en
    el ultimo vector (promedios)*/
    int leg[]={38,24,18,83,57};
    int notas1[]={10,7,2,2,5};
    int notas2[]={4,10,2,5,4};
    float promedios[5],prom_aux;

    //Recorremos cada fila(posicion) del conjunto de vectores leyendo, calculando y escribiendo datos
    for(int i=0;i<5;i++)
    {
        prom_aux=((float)notas1[i]+(float)notas2[i])/2;
        promedios[i]=prom_aux;

        printf("Pos: %d Leg: %d Promedio: %.2f\n",i,leg[i],promedios[i]);
    }

    //Pausa
    system("pause");

    return 0;
}
