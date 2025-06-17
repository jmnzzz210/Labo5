#include "linked_list.h"
#include <stdio.h>

// Funcion para crear e insertar lista
//
//

int main(void) {
  count list_test;
  list_create(&list_test);

  list_insert_front(&list_test, 2);
  list_insert_front(&list_test, 1);

  // Crear print para verificar lista
  //

  Node *current = list_test.head;
  while (current) {
    printf("%d y ", current->data);
    current = current->next;
  }
  printf("NULO\n");

  return 0;
}
