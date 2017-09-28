#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nombre[50];
    int edad;
    short int estado;
    int dni;
}EPersona;

/** \brief Devuelve la primera posicion del array de estructuras que se encuentra lugar libre para Altas (debe contener un campo "ESTADO")
 *
 * \param lista[] Array de estructuras a analizar
 * \param tamLista Cantidad de elementos del array de estructuras
 * \return -1-No hay lugar libre,<Otro valor>-Posicion libre del array de estructuras
 *
 */
int obtenerEspacioLibre(EPersona[],int);

 /** \brief Lista en consola los datos de personas en alta en el sistema (debe contener un campo "ESTADO")
  *
  * \param lista[] Array de estructuras de la base de datos
  * \param tamLista Cantidad de elementos del array de estructura
  *
  */
void mostrarLista(EPersona[],int);

/** \brief Inicializa el array de la base de datos, indicando que todos son espacios libres
 *
 * \param lista[] Array de estructuras de base de datos
 * \param tamLista Cantidad de elementos del array
 *
 */
void inicializarDatos(EPersona[],int);

/** \brief Comprueba si un array para un ABM tiene todos los espacios sin altas
 *
 * \param lista[] Array de estructuras
 * \param tamLista Cantidad de elementos del array de estructuras
 * \return 0-Array con altas, 1-Array sin altas
 *
 */
int arrayVacio(EPersona[],int);
