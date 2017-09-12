#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct
{
  int legajo;
  char nombre[50];
  int edad;
  float peso;
  char sintoma[50];
}ePaciente;

void generarDatos(ePaciente[], int);
void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void mostrarPacientesSintoma(ePaciente[], int, char[]);
void cargarPacientes(ePaciente[], int);
void ordenarPacientes(ePaciente[], int, int);

int main()
{
    ePaciente listaPacientes[TAM];

    //cargarPacientes(listaPacientes, TAM);
    generarDatos(listaPacientes, TAM);
    ordenarPacientesNombre(listaPacientes, TAM, 0);
    mostrarPacientesSintoma(listaPacientes, TAM, "dolor De Cabeza");
    mostrarTodosLosPacientes(listaPacientes, TAM);

    return 0;
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
    system("cls");

    for(int i=0; i<tam; i++)
    {
        mostrarPaciente(lista[i]);
    }

}

void mostrarPaciente(ePaciente paciente)
{
        printf("%d--%s--%d--%f--%s\n", paciente.legajo,paciente.nombre, paciente.edad, paciente.peso, paciente.sintoma);
}

void cargarPacientes(ePaciente lista[], int cantidad)
{
    for(int i=0; i<TAM; i++)
    {
        system("cls");

        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);

        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);

        printf("Ingrese edad: ");
        scanf("%d", &lista[i].edad);

        printf("Ingrese peso: ");
        scanf("%f", &lista[i].peso);

        printf("Ingrese sintoma: ");
        fflush(stdin);
        gets(lista[i].sintoma);
    }
}

void ordenarPacientesNombre(ePaciente pacientes[], int cantidad, int ascendente)
{
    ePaciente aux_paciente;

    for(int i=0; i<cantidad-1; i++)
    {
        for(int j=i+1; j<cantidad; j++)
        {
            if(ascendente==0)
            {
                if(stricmp(pacientes[i].nombre,pacientes[j].nombre)>0)
                {
                    aux_paciente=pacientes[i];
                    pacientes[i]=pacientes[j];
                    pacientes[j]=aux_paciente;
                }
            }
            else
            {
                if(stricmp(pacientes[i].nombre,pacientes[j].nombre)<0)
                {
                    aux_paciente=pacientes[i];
                    pacientes[i]=pacientes[j];
                    pacientes[j]=aux_paciente;
                }
            }
        }
    }
}

void mostrarPacientesSintoma(ePaciente lista_pacientes[], int tam, char sint_paciente[])
{
    system("cls");

    for(int i=0;i<tam;i++)
    {
        if(stricmp(lista_pacientes[i].sintoma,sint_paciente)==0)
        {
            mostrarPaciente(lista_pacientes[i]);
        }
    }
}

void generarDatos(ePaciente lista_pacientes[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        strcpy(lista_pacientes[i].nombre, "Nombre");
        lista_pacientes[i].edad=10;
        lista_pacientes[i].legajo=i;
        lista_pacientes[i].peso=10;
    }

    strcpy(lista_pacientes[0].sintoma, "Dolor de panza");
    strcpy(lista_pacientes[1].sintoma, "Dolor de cabeza");
    strcpy(lista_pacientes[2].sintoma, "Dolor de panza");
    strcpy(lista_pacientes[3].sintoma, "Dolor de cabeza");
    strcpy(lista_pacientes[4].sintoma, "Dolor de panza");
}
