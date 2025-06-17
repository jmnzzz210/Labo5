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

  Node *current = list_test.head;
  printf("Lista antes de posicion especifica: ");
  while (current) {
    printf("%d y ", current->data);
    current = current->next;
  }
  printf("NULO\n");

  // Print de busqueda

  Node *buscar;
  buscar = list_search(&list_test, 3);
  printf("%s\n", buscar ? "3 encontrado" : "3 no encontrado");

  buscar = list_search(&list_test, 6);
  printf("%s\n", buscar ? "7 encontrado" : "7 no encontrado");

  // Print para verificar lista despues de indicar posicion especifica

  list_insert_at(&list_test, 6, 6);

  current = list_test.head;
  printf("Lista despues de posicion especifica: ");
  while (current) {
    printf("%d y ", current->data);
    current = current->next;
  }
  printf("NULO\n");

  // Print para verificar lista despues de eliminar un dato

  list_delete_data(&list_test, 4);

  current = list_test.head;
  printf("Lista despues de eliminar 4 :");
  while (current) {
    printf("%d y ", current->data);
    current = current->next;
  }
  printf("NULO\n");

  return 0;
}
