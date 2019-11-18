typedef int Data;

typedef struct point {
	Data data;
	struct point * next;
}Point;


typedef struct {
	Point * head;
}Stack;



//�������ʱ�ȭ ����, head�� next�� ���� ���� ����
void stack_init(Stack * pstack);


//������ ���� 1, �ƴϸ� 0 ��ȯ(���̳���� next�� null���� Ȯ��)
int stack_empty(Stack * pstack);


// ���ÿ� ������ ����
void stack_push(Stack * pstack, Data data);

//������ �����͸� �����ϰ� ��ȯ
Data stack_pop(Stack * pstack);


//������ ����� ��Ҹ� ���������ʰ� ��ȯ
Data stack_peek(Stack * pstack);
