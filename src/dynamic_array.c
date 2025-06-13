#include "dynamic_array.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

arreglod* create(size_t tamano_inicial) {
	
	arreglod* arr = (arreglod*) malloc(sizeof(arreglod)));
        if (arr == NULL) {
		printf("Error al reservar memoria para el arreglo\n");
		exit(1);
	}

	arr->datos = (int*)malloc(tamano_inicial * sizeof(int));

	if (arr->datos == NULL) {
		printf("Error al reservar la memoria")
		free(arr);
		exit();
	}
	arr->tamano=0
	arr->tamano_inicial = tamano_inicial
	return arr;
}

void append(arreglod* arr, int numero){
//Primero se debe de verificar que entre, sino se debe de redimensionar
	if (arr->tamano == arr->tamano_inicial) {
		size_t tamano_act = arr->tamano_inicial * 2;
		int* nuevo_dato = (int*)realloc(arr->datos, tamano_act * sizeof(int));
		if (nuevo_dato == NULL) {
		printf("Error al redimensionar el arreglo.")
		exit();
		}
		arr->datos=nuevo_dato;
		arr->tamano_inicial=tamano_act;
	}
	arr->dato[arr->tamano]= numero; //Se va hacia el último valor del arreglo para colocar el número.
	arr->tamano++
}


void remove (arreglod* arr, int numero) {
	for (int i=0, i < arr->tamano; i++){
		if (arr->datos[i] == numero) {
		for (int j = i; j < arr->tamano -1; j++) {
			arr->datos[j] = arr->datos[j+1];
		}
	}
	arr->tamano--;
	return;
	}
	

}

