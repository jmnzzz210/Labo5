#ifndef STACK_H
#define STACK_H

typedef struct Nodest {
	int data;
	struct Nodest* next;
} Nodest;

typedef struct {
	Nodest* top;
} Stack;

Stack* createStack();
void push(Stack* stack, int data);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
void printStack(Stack* stack);
void freeStack(Stack* stack);

#endif
