#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* createStack() {
	Stack* s = malloc(sizeof(Stack));
	s->top = NULL;
	return s;
}

void push(Stack* s, int data) {
	Nodest* newNode = malloc(sizeof(Nodest));
	newNode->data = data;
	newNode->next = s->top;
	s->top = newNode;
}

int pop(Stack* s) {
	if (s->top == NULL) {
		printf("Stack underflow\n");
		return -1;
	}
	Nodest* temp = s->top;
	int value = temp->data;
	s->top = temp->next;
	free(temp);
	return value;
}

int peek(Stack* s) {
	if (s->top == NULL) return -1;
	return s->top->data;
}

int isEmpty(Stack* s) {
	return s->top == NULL;
}

void printStack(Stack* s) {
	for (Nodest* cur = s->top; cur; cur = cur->next)
		printf("%d ", cur->data);
	printf("\n");
}

void freeStack(Stack* s) {
	Nodest* cur = s->top;
	while (cur) {
		Nodest* temp = cur;
		cur = cur->next;
		free(temp);
	}
	free(s);
}
