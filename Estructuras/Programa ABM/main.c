#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>



typedef struct{
    int id;
    char nombre[32];
    char categoria;
    int proyecto;
    int estado;
}
eProgramador;

void inicializar_array(eProgramador[],int);
void mostrar_programadores(eProgramador[],int);
void mostrar_programador(eProgramador);
void harcodear_programadores(eProgramador[]);
int buscar_libre(eProgramador[],int);
int buscar_programador(int,eProgramador[],int);
void alta_programador(eProgramador[],int);
void baja_programador(eProgramador[],int,int);

//a = Senior
//b = SemiSenior
//c = Junior

int menu();

int main()
{
    eProgramador programador[50];

    inicializar_array(programador,50);

    int id_borrar;

    //harcodear_programadores(programador);

    //alta_programador(programador,31);

    //mostrar_programadores(programador,50);

    int salir = 1;

    do{
        switch(menu()){

    case 1:
        system("cls");
        printf("Opcion1");
        alta_programador(programador,50);
        getch();

        break;

    case 2:
         system("cls");
         case 'A':
            printf("Opcion2");
            getch();
            break;
    case 3:
        system("cls");
        printf("Opcion3");
        printf("ID: ");
        scanf("%d",&id_borrar);
        baja_programador(programador,50,id_borrar);
        getch();
        break;

    case 4:
         system("cls");
        printf("Opcion4");
        mostrar_programadores(programador,50);
        getch();
        break;



    case 5:
      salir = 0;
      break;
    }
    }while(salir);
    return 0;
}


    int menu(){
        int opcion;
        system("cls");
        printf("\n***Programadores***\n\n\n");
        printf("1- Alta Programador\n");
        printf("2- Modificacion Programador\n");
        printf("3- Baja Programador\n");
        printf("4- Listado Programadores\n");
        printf("5- Salir\n");
        printf("\n\nIngrese opcion: ");
        scanf("%d", &opcion);

        return opcion;

    }

void inicializar_array(eProgramador program[],int tam_progra)
{
    for(int i=0;i<tam_progra;i++)
    {
        program[i].id=0;
        strcpy(program[i].nombre,"");
        program[i].categoria='A';
        program[i].proyecto=0;
        program[i].estado=0;
    }
}

void mostrar_programadores(eProgramador programadores[],int tam_programadores)
{
    int flag=0;

    for(int i=0;i<tam_programadores;i++)
    {
        if(programadores[i].estado==1)
        {
            mostrar_programador(programadores[i]);
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("No hay programadores que mostrar.\n");
    }

    system("pause");
}

void mostrar_programador(eProgramador programador)
{
    char cat[20];

    switch(programador.categoria)
    {
        case 'A':
            strcpy(cat,"Senior");
            break;
        case 'B':
            strcpy(cat,"Semi-Senior");
            break;
        case 'C':
            strcpy(cat,"Junior");
            break;
    }

    printf("ID: %d Nombre: %s Categoria: %c Proyecto: %d\n",programador.id, programador.nombre, cat, programador.proyecto);
}

void harcodear_programadores(eProgramador program[])
{
    for(int i=0;i<=5;i++)
    {
        program[i].estado=1;
    }
}

int buscar_libre(eProgramador program[],int tam)
{
    int indice_libre=-1;

    for(int i=0;i<tam;i++)
    {
        if(program[i].estado==0)
        {
            indice_libre=i;
            break;
        }
    }

    return indice_libre;
}

int buscar_programador(int id_prog,eProgramador program[],int tam)
{
    int indice=-1;

    for(int i=0;i<tam;i++)
    {
        if(program[i].id==id_prog)
        {
            indice=i;
            break;
        }
    }

    return indice;
}

void alta_programador(eProgramador program[],int indice)
{
    int libre=buscar_libre(program,50);

    if(libre!=-1)
    {
        printf("Guardar en elemento: %d\n\n",libre);

        printf("Ingrese ID: ");
        scanf("%d",&program[libre].id);

        printf("Nombre: ");
        fflush(stdin);
        gets(program[libre].nombre);

        printf("Categoria: ");
        fflush(stdin);
        scanf("%c",&program[libre].categoria);

        printf("Proyecto: ");
        scanf("%d",&program[libre].proyecto);

        program[libre].estado=1;
    }
}

void baja_programador(eProgramador program[],int tam,int id_program)
{
    int indice_ok;

    indice_ok=buscar_programador(id_program,program,tam);

    if(indice_ok!=-1)
    {
        program[indice_ok].estado=0;
        printf("Usuario eliminado.\n");
    }
    else
    {
        printf("No se encontro el programador.\n");
    }
}
