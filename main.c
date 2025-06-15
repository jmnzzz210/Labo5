#include<stdio.h>
#include "dynamic_array.h"
#include <stdlib.h>

int main(){
    arreglod* arr = create(10);
    int seleccion;
    printf("Bienvenido al programa de arreglos dinámicos\n");
    while(1){
        printf("Selecciona la opción que desea:\n");
        printf("1. Agregar elemento al arreglo\n"
           "2. Eliminar elemento del arreglo\n"
           "3. Obtener el número del índice seleccionado\n"
           "4. Imprimir arreglo actual\n"
           "5. Salir\n");
        scanf("%d", &seleccion);
        switch(seleccion){
            case 1: {
                int num1;
                printf("Seleccione el número que desea agregar al arreglo:\n");
                scanf("%d", &num1);
                append(arr, num1);
                printf("El arreglo ahora es:\n");
                print(arr);
                printf("\n");
             break;
            }
            case 2: {
                int num2;
                printf("Seleccione el número que desea eliminar del arreglo:\n");
                scanf("%d", &num2);
                remove_element(arr, num2);
                printf("El arreglo ahora es:\n");
                print(arr);
                printf("\n");
             break;
            }
            case 3: {
                int num3;
                printf("Indique el índice el cual desea conocer el valor del número en el arreglo.\n");
                scanf("%d", &num3);
                int resultado= get(arr, num3);
                printf("El valor en el índice %d es: %d \n",num3, resultado);
                printf("\n");
             break;
            }

            case 4:{
                printf("El arreglo actual es:\n");
                print(arr);
                printf("\n");
                break;
            }
            case 5:{
            free_arreglod(arr);
            exit(0);
            }
            default:
         printf("Seleccione un número de los presentados anteriormente.\n");

        }
        
    }
    return 0;
}