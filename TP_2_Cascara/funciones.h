#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {
    char nombre[50];
    int edad;
    short int estado;
    int dni;
}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param cantidad de elementos que posee el array
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[],int);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona[],int,int);

#endif // FUNCIONES_H_INCLUDED
