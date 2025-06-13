#include "dynamic_array.h"

returntype* create(tamaño_inicial){
	
	*array= int malloc(tamaño_inicial * sizeof(int));
        if (*array == NULL) {
		printf("Error al reservar memoria para el arreglo\n");
		exit(1);
	}
	return *array
}

