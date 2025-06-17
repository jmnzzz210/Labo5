#include "linked_list.h"
#include <stdlib.h>

// Funcion para implementar la lista
//

void list_create(count *list) {
  list->head = NULL;
  list->size = 0;
}

void list_insert_front(count *list, int value) {
  Node *new = malloc(sizeof(Node));
  if (!new) {
    return;
  }

  new->data = value;
  new->next = list->head;
  list->head = new;
  list->size++;
}
