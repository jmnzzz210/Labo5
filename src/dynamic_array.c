#include "dynamic_array.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

arreglod* create(size_t tamano_inicial) {
	
	arreglod* arr = (arreglod*) malloc(sizeof(arreglod));
        if (arr == NULL) {
		printf("Error al reservar memoria para el arreglo \n");
		exit(1);
	}

	arr->datos = (int*)malloc(tamano_inicial * sizeof(int));

	if (arr->datos == NULL) {
		printf("Error al reservar la memoria \n");
		free(arr);
		exit(1);
	}
	arr->tamano=0;
	arr->tamano_inicial = tamano_inicial;
	return arr;
}

void append(arreglod* arr, int numero){
//Primero se debe de verificar que entre, sino se debe de redimensionar
	if (arr->tamano == arr->tamano_inicial) {
		size_t tamano_act = arr->tamano_inicial * 2;
		int* nuevo_dato = (int*)realloc(arr->datos, tamano_act * sizeof(int));
		if (nuevo_dato == NULL) {
		printf("Error al redimensionar el arreglo.\n");
		exit(1);
		}
		arr->datos=nuevo_dato;
		arr->tamano_inicial=tamano_act;
	}
	arr->datos[arr->tamano]= numero; //Se va hacia el último valor del arreglo para colocar el número.
	arr->tamano++;
}


void remove_element(arreglod* arr, int numero) {
    size_t i = 0;
    int encontrado = 0;
    while (i < arr->tamano) {
        if (arr->datos[i] == numero) {
            for (size_t j = i; j < arr->tamano - 1; j++) {
                arr->datos[j] = arr->datos[j + 1];
            }
            arr->tamano--;
            encontrado = 1;
        } else {
            i++;
        }
    }
    if (encontrado == 0) {
        printf("El número %d no se encuentra en el arreglo.\n", numero);
    }
}
int get(arreglod* arr, size_t ubicacion) {
	if (ubicacion >= arr->tamano){
		printf("Problema: El índice es mayor al tamaño de la matriz \n");
		exit(1);
	}
	return arr->datos[ubicacion];
}

void free_arreglod(arreglod* arr) {
    if (arr != NULL) {               
        if (arr->datos != NULL) {    
            free(arr->datos);         
            arr->datos = NULL;        
        }
        free(arr);                   
    }
}

void print(const arreglod* arr){
    for(size_t i = 0; i < arr->tamano; i++){
        printf("%d ", arr->datos[i]);
    }
    printf("\n");
}

