//Headers guards.
#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <stddef.h>

typedef struct {
    int* dato;
    size_t tamano;
    size_t tamano_inicial;
} DynamicArray;

DynamicArray* da_create(size_t tamano_inicial);
void da_append(DynamicArray* arr, int numero);
void da_remove(DynamicArray* arr, int numero);
int da_get(DynamicArray* arr, size_t ubicacion);
void da_free(DynamicArray* arr);
void da_print(const DynamicArray* arr);

#endif
