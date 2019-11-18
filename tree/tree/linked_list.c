#include "linked_list.h"
#include <stdlib.h>
#include <stdio.h>



Node * make_new_node(void) {
	Node * new_node = (Node *)malloc(sizeof(Node));

	//new node의 서브트리가 모두 공집함으로 설정
	new_node->left = NULL;
	new_node->right = NULL;

	return new_node;
}

Data get_data(Node * bt) {
	return bt->data;
}

void set_data(Node* bt, Data data) {
	bt->data = data;
}

Node * get_left_subtree(Node * bt) {
	return bt->left;
}

Node * get_right_subtree(Node * bt) {
	return bt->right;
}

void make_left_subtree(Node * main, Node * sub) {
	main->left = sub;
}

void make_right_subtree(Node * main, Node * sub) {
	main->right = sub;
}



void inorder_traverse(Node * bt) {
	if (bt == NULL)
		return;
	inorder_traverse(bt->left);

	printf("%d\n", bt->data);

	inorder_traverse(bt->right);
}



void preorder_traverse(Node * bt) {
	if (bt == NULL)
		return;
		printf("%d\n", bt->data);

		preorder_traverse(bt->left);

		preorder_traverse(bt->right);
}

void posorder_traverse(Node * bt) {
	if (bt == NULL)
		return;


	posorder_traverse(bt->left);

	posorder_traverse(bt->right);

	printf("%d\n", bt->data);

}

void delete_tree(Node * bt) {
	if (bt == NULL)
		return;
	Node * right = bt->right;


	delete_tree(bt->left);

	free(bt);

	delete_tree(right);
}