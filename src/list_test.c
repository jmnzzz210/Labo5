#include "linked_list.h"
#include <stdlib.h>

// Funcion para implementar la lista
//

void list_create(count *list) {
  list->head = NULL;
  list->size = 0;
}

// Funcion para introducir un valor al principio de la lista
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

// Funcion para buscar un valor de la lista

Node *list_search(count *list, int value) {
  Node *current = list->head;
  while (current) {
    if (current->data == value)
      return current;
    current = current->next;
  }
  return NULL;
}

// Funcion para introducir un valor al final de la lista

void list_insert_back(count *list, int value) {
  Node *new = malloc(sizeof(Node));
  if (!new)
    return;

  new->data = value;
  new->next = NULL;

  Node *current = list->head;
  while (current->next)
    current = current->next;

  current->next = new;
  list->size++;
}

// Funcion para introducir un valor en una posicion especifica

count *list_insert_at(count *list, int pos, int value) {
  if (pos < 1)
    return list;

  if (pos == 1) {
    Node *new = malloc(sizeof(Node));
    if (!new) {
      return list;
    }
    new->data = value;
    new->next = list->head;
    list->head = new;
    list->size++;
    return list;
  }

  Node *current = list->head;
  for (int i = 1; i < pos - 1 && current != NULL; ++i)
    current = current->next;

  if (current == NULL)
    return list;

  Node *new = malloc(sizeof(Node));
  if (!new) {
    return list;
  }

  new->data = value;
  new->next = current->next;
  current->next = new;
  list->size++;
  return list;
}

// Funcion para eliminar un elemento basado en data
int list_delete_data(count *list, int value) {
  Node *current = list->head;
  Node *prev = NULL;

  while (current && current->data != value) {
    prev = current;
    current = current->next;
  }

  if (current == NULL) {
    return 0;
  }

  // Si se desea eliminar la cabeza

  if (prev == NULL)
    list->head = current->next;
  else
    prev->next = current->next;

  free(current);
  list->size--;
  return 1;
}
