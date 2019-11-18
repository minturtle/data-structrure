#include <stdio.h>
#include "stack.h"


#define NUMBER 5



int main(void) {
	Stack x;
	Stack * stack = &x;

	stack_init(stack);

	printf("empty ? %d\n", stack_empty(stack));

	for (int i = 0; i < NUMBER; i++) {
		Data data;
		scanf("%d", &data);
		stack_push(stack, data);
	}
	printf("empty? %d\n", stack_empty(stack));

	printf("peek : ");
	for (int i = 0; i < NUMBER; i++) {
		printf("%d ", stack_peek(stack));

	}
	printf("\npop: ");
	for (int i = 0; i < NUMBER; i++) {
		printf("%d ", stack_pop(stack));
	}
	printf("empty? %d", stack_empty(stack));
	
}