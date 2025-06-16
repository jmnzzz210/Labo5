#include <stdio.h>
#include <stdlib.h>

// Estructura para definir los nodos
//

typedef struct Node {

  int data;
  struct Node *next;
} Node;

// Estructura para llevar cuenta de los nodos
//

typedef struct List {

  Node *head;
  size_t size;
} count;
