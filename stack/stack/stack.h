typedef int Data;

typedef struct point {
	Data data;
	struct point * next;
}Point;


typedef struct {
	Point * head;
}Stack;



//스택의초기화 진행, head의 next를 더미 노드로 설정
void stack_init(Stack * pstack);


//스택이 빈경우 1, 아니면 0 반환(더미노드의 next가 null인지 확인)
int stack_empty(Stack * pstack);


// 스택에 데이터 저장
void stack_push(Stack * pstack, Data data);

//마지막 데이터를 삭제하고 반환
Data stack_pop(Stack * pstack);


//마지막 저장된 요소를 삭제하지않고 반환
Data stack_peek(Stack * pstack);
