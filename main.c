#include <stdio.h>
#include "stack.h"

int main() {
	Stack* s = createStack();

	push(s, 50);
	push(s, 40);
	push(s, 30);

	printf("Stack actual: ");
	printStack(s);

	printf("Tope de la pila: %d\n", peek(s));

	printf("Pop: %d\n", pop(s));
	printf("Stack tras pop: ");
	printStack(s);


	freeStack(s);
	return 0;
}

