#include "linked_list.h"
#include <stdio.h>




int main(void) {
	Node * A = make_new_node();
	Node * B = make_new_node();
	Node * C = make_new_node();
	Node * D = make_new_node();
	Node * E = make_new_node();
	Node * F = make_new_node();


	set_data(A, 1);
	set_data(B, 2);
	set_data(C, 3);
	set_data(D, 4);
	set_data(E, 5);
	set_data(F, 6);

	make_left_subtree(A, B);
	make_right_subtree(A, C);
	make_left_subtree(B, D);
	make_right_subtree(B, E);



	preorder_traverse(A);
}