#include <stdio.h>
#include <stdlib.h>

void graficar(EPersona lista[],int tamLista)
{
    //Contadores de clasificaciones de edades
    int c_18=0, c_19_35=0, c_36_mas=0, max_clasif;//MODIFICAR LAS CATEGORIAS

    //Recorre todo el attay, tomando una estadistica de clasificaciones de edades
    for(int i=0;i<=tamLista;i++){
        //Cantidad de menores de 18 años
        if(lista[i].estado==1 && lista[i].edad<19){
            c_18++;
        }
        //Cantidad de personas entre 19 y 35 años
        else if(lista[i].estado==1 && lista[i].edad>18 && lista[i].edad<36){
            c_19_35++;
        }
        //Cantidad de personas mayores a 35 años
        else if(lista[i].estado==1){
            c_36_mas++;
        }
    }

    //Averigua que cantidad maxima tiene la clasificacion que mas personas tiene (cantidad de lineas maximas del grafico)
    if(c_18>=c_19_35 && c_18>=c_36_mas){
        max_clasif=c_18;
    }
    else if(c_19_35>=c_18 && c_19_35>=c_36_mas){
        max_clasif=c_19_35;
    }
    else if(c_36_mas>=c_18 && c_36_mas>=c_19_35){
        max_clasif=c_36_mas;
    }

    //Grafica linea por linea, los datos representativos de la estadistica anterior
    //En caso de haber datos en los cuales hacer una estadistica, graficara
    if(max_clasif!=0){
        for(int i=max_clasif;i>0;i--){
            if(i<=c_18){
                printf("  *  ");
            }
            else
            {
                printf("     ");
            }

            if(i<=c_19_35){
                printf("  *  ");
            }
            else
            {
                printf("     ");
            }

            if(i<=c_36_mas){
                printf("  *  ");
            }
            else{
                printf("     ");
            }

            printf("\n");
        }
        printf("0-18 19-35 >36\n");
    }
    else{
        printf("No hay datos, no es posible graficar una estadistica.\n");
    }
}
