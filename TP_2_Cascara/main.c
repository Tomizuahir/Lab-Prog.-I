//Hacer modulares los procesos de cada opcion
//Hacer modulares las validaciones de datos
//Hacer opciones de 2 a 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM_LISTA 20

void Hardcodeo(EPersona[],int);
void Listar(EPersona[],int);

int main()
{
    char seguir='s';//Respuesta del menu principal para volver al menu o salir del programa
    int opcion=0;//Opcion seleccionada del menu

    int aux_num;//Variable auxiliar para numeros enteros
    char aux_cad[512];//Variable auxiliar para cadenas de caracteres
    int id_actual;//Elemento actual en el que trabaja el dato al que hacerle ABM en el array de estructuras

    //Definir un array de estructuras de 20 elementos para el tipo EPersona
    EPersona dPersona[20];

    Hardcodeo(dPersona,TAM_LISTA);

    //Menu principal
    while(seguir=='s')
    {
        printf("MENU PRINCIPAL:\n\n");
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("--------------------------------------\n");
        printf("5- Salir\n\n");
        printf("Opcion elegida: ");

        //Ingresar la opcion elegida
        scanf("%d",&opcion);

        //Validar opcion seleccionada
        while(opcion<1 || opcion>5)
        {
            printf("ERROR Opcion no valida. Elija una opcion: ");
            scanf("%d",&opcion);
        }

        //Borrar consola
        system("cls");

        //Ejecutar instrucciones de la opcion seleccionada anteriormente
        switch(opcion)
        {
            //Opcion 1
            case 1:
                //Busca el primer indice con espacio libre para guardar el alta a ingresar
                id_actual=obtenerEspacioLibre(dPersona,TAM_LISTA);

                //Si encontramos un indice libre en el array de estructuras, pedimos los datos del alta a ingresar
                if(id_actual!=-1)
                {
                    //Solicita DNI y lo guarda en el indice, campo DNI
                    printf("ALTA DE DATOS:\n\n");
                    printf("DNI: ");
                    scanf("%d",&dPersona[id_actual].dni);

                    //Valida el DNI ingresado
                    while(dPersona[id_actual].dni<1000000)
                    {
                        printf("ERROR, dato no valido. Ingresar desde 1000000 sin puntos. DNI: ");
                        scanf("%d",&dPersona[id_actual].dni);
                    }

                    //Comprobar si ya existe el dni
                    aux_num=buscarPorDni(dPersona,dPersona[id_actual].dni,TAM_LISTA);

                    printf("AUX: %d\n",aux_num);

                    //Si el DNI ya existe no nos permite guardar mas datos ni registrar el alta
                    if(aux_num!=-1)
                    {
                        printf("El DNI ya existe.\n");
                    }
                    //Si el DNI no fue encontrado en el array, nos pide datos y permite registrar el alta
                    else
                    {
                        printf("El DNI no fue ingresado anteriormente.\n");

                        //Pide nombre y lo guarda en el elemento libre del array
                        printf("Nombre: ");
                        fflush(stdin);
                        gets(dPersona[id_actual].nombre);

                        //Valida el nombre ingresado
                        while(strlen(dPersona[id_actual].nombre)<3)
                        {
                            printf("ERROR, dato no valido. Ingrese al menos 3 caracteres. Nombre: ");
                            fflush(stdin);
                            gets(dPersona[id_actual].nombre);
                        }

                        //Pide la edad
                        printf("Edad: ");
                        scanf("%d",&dPersona[id_actual].edad);

                        //Valida la edad
                        while(dPersona[id_actual].edad<0 || dPersona[id_actual].edad>120)
                        {
                            printf("ERROR, dato no valido. Ingresar desde 0 hasta 120. EDAD: ");
                            scanf("%d",&dPersona[id_actual].edad);
                        }

                        //Marca la bandera de esta estructura para no sobrescribir los datos en un futuro ingreso
                        dPersona[id_actual].estado=1;
                    }
                //Si el indice libre devuelto es -1, no ha espacio y no nos dejara ingresar datos.
                }
                else
                {
                    printf("No hay espacio libre para guardar esta entrada.\n");
                }
                break;
            //Opcion 2
            case 2:
                break;
            //Opcion 3
            case 3:
                Listar(dPersona,TAM_LISTA);
                break;
            //Opcion 4
            case 4:
                break;
            //Opcion 5
            case 5:
                seguir = 'n';
                break;
        }
    }

    //Retornar estado de ejecucion
    return 0;
}

void Hardcodeo(EPersona lista[],int tamLista)
{
    for(int i=0;i<tamLista;i++)
    {
        lista[i].estado=0;
    }
}

void Listar(EPersona lista[],int tamLista)
{
    for(int i=0;i<tamLista;i++)
    {
        printf("ID: %d DNI: %d NOMBRE: %s EDAD: %d ESTADO: %d\n",i,lista[i].dni,lista[i].nombre,lista[i].edad,lista[i].estado);
    }
}
