

typedef int Data;


typedef struct _node {
	struct _node * left;
	struct _node * right;
	Data data;
}Node;


//새로운 노드를 만든다
Node * make_new_node(void);

//노드에 저장된 데이터반환
Data get_data(Node * bt);


//노드에 데이터저장
void set_data(Node* bt, Data data);


//왼쪽 서브트리의 주소값 반환
Node * get_left_subtree(Node * bt);

//오른쪽 서브트리이 주소값 반환
Node * get_right_subtree(Node * bt);

//왼쪽 서브트리로 연결
void make_left_subtree(Node * main, Node * sub);

//오른쪽 서브트리로 연결
void make_right_subtree(Node * main, Node * sub);


//중위 순회
void inorder_traverse(Node * bt);

//전위 순회
void preorder_traverse(Node * bt);

//후위 순회
void posorder_traverse(Node * bt);


//트리 소멸
void delete_tree(Node * bt);