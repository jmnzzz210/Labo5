//Headers guards.
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stddef.h>

typedef struct {
    int* dato;
    size_t tamano;
    size_t tamano_inicial;
} arreglod;

arreglod* create(size_t tamano_inicial); // función que crea el arreglo
void append(arreglod* arr, int numero);  // función que agrega un elemento al final del arreglo
void remove(arreglod* arr, int numero); //función que elimina un elemento del arreglo
int get(arreglod* arr, size_t ubicacion); //función para obtener elemento por su índice
void free_arreglod(arreglod* arr); // función que libera la memoria del puntero
void print(const arreglod* arr); // función que imprime el arreglo

#endif
