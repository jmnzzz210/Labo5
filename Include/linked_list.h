#ifndef LINKED_LIST_H // Header guard de la presentacion.
#define LINKED_LIST_H

#include <stddef.h>

// Estructura para definir los nodos
//

typedef struct Node {

  int data;
  struct Node *next;
} Node;

// Estructura para llevar cuenta de los nodos
//

typedef struct list_count {

  Node *head;
  size_t size;
} count;

/* Prototipos de Funcion*/

// Funcion para crear la lista
//

void list_create(count *list);

// Funcion para introducir un valor al inicio

void list_insert_front(count *list, int value);

#endif
