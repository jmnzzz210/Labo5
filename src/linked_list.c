#include "linked_list.h"
#include <stdio.h>

// Funcion para crear e insertar lista
//
//

int main(void) {
  count list_test;
  list_create(&list_test);

  list_insert_front(&list_test, 3);
  list_insert_front(&list_test, 2);
  list_insert_front(&list_test, 1);
  list_insert_back(&list_test, 4);
  list_insert_back(&list_test, 5);

  // Crear print para verificar lista
  //

  printf("Lista antes de posicion especifica: ");
  list_print_forward(&list_test);

  // Print de busqueda

  printf("%s\n",
         list_search(&list_test, 3) ? "3 encontrado" : "3 no encontrado");

  printf("%s\n",
         list_search(&list_test, 7) ? "7 encontrado" : "7 no encontrado");

  // Print para verificar lista despues de indicar posicion especifica

  list_insert_at(&list_test, 6, 6);

  printf("Lista despues de posicion especifica: ");
  list_print_forward(&list_test);

  // Print para verificar lista despues de eliminar un dato

  list_delete_data(&list_test, 4);

  printf("Lista despues de eliminar 4 :");
  list_print_forward(&list_test);

  list_destroy(&list_test);

  return 0;
}
