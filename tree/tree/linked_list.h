

typedef int Data;


typedef struct _node {
	struct _node * left;
	struct _node * right;
	Data data;
}Node;


//���ο� ��带 �����
Node * make_new_node(void);

//��忡 ����� �����͹�ȯ
Data get_data(Node * bt);


//��忡 ����������
void set_data(Node* bt, Data data);


//���� ����Ʈ���� �ּҰ� ��ȯ
Node * get_left_subtree(Node * bt);

//������ ����Ʈ���� �ּҰ� ��ȯ
Node * get_right_subtree(Node * bt);

//���� ����Ʈ���� ����
void make_left_subtree(Node * main, Node * sub);

//������ ����Ʈ���� ����
void make_right_subtree(Node * main, Node * sub);


//���� ��ȸ
void inorder_traverse(Node * bt);

//���� ��ȸ
void preorder_traverse(Node * bt);

//���� ��ȸ
void posorder_traverse(Node * bt);


//Ʈ�� �Ҹ�
void delete_tree(Node * bt);