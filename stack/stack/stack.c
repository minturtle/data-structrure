#include "stack.h"
#include <stdlib.h>


void stack_init(Stack * pstack) {
	pstack->head = (Point*)malloc(sizeof(Point));
	pstack->head->next = (Point*)malloc(sizeof(Point));
	pstack->head->next->next = NULL; // dummy노드의 next를 null로
}

int stack_empty(Stack * pstack) {
	Point * dummy = pstack->head->next;

	if (dummy->next == NULL) {
		return 1;
	}
	else
		return 0;
}


void stack_push(Stack * pstack, Data data) {
	//시작은 더미노드
	Point * node = pstack->head->next;


	Point * new_node = (Point *)malloc(sizeof(Point));
	new_node->data = data;
	new_node->next = NULL;


	while (node->next != NULL) {
		node = node->next; //마지막 노드로 이동
	}

	node->next = new_node;
}

Data stack_pop(Stack * pstack) {
	//시작은 더미노드
	Point * node = pstack->head->next;
	Point * free_node = NULL;

	Data return_data;

	while (node->next->next != NULL) {
		node = node->next; //마지막 노드의 이전노드로 이동
	}
	free_node = node->next;
	return_data = free_node->data;
	node->next = NULL;


	free(free_node);

	return return_data;
}

Data stack_peek(Stack * pstack) {
	Point *node = pstack->head->next;

	while (node->next != NULL) {
		node = node->next;
	}

	return node->data;
}