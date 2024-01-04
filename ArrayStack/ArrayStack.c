#include "ArrayStack.h"

// 스택 및 노드 생성/소멸 연산
void AS_CreateStack(ArrayStack** StackFunc, int Capacity)
{
    // 스택을 자유 저장소에 생성
    (*StackFunc) = (ArrayStack*)malloc(sizeof(ArrayStack));
    // 입력된 Capacity만큼의 노드를 자유 저장소에 미리 생성
    (*StackFunc)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);
    // 배열의 용량 저장
    (*StackFunc)->Capacity = Capacity;
    // 첫 번째 배열 요소를 가리키는 첨자가 0이므로 비어 있는 스택의 최상위 위치가 이보다 작아야 하기 때문에 -1로 초기화
    (*StackFunc)->Top = -1;
}
// 사용이 끝난 자유 저장소는 반드시 정리
void AS_DestroyStack(ArrayStack* Stack)
{
    // 노드를 자유 저장소에서 해제
    free(Stack->Nodes);
    // 스택을 자유 저장소에서 해제
    free(Stack);
}

// 노드 삽입(Push) 연산: 최상위 노드의 인덱스(Top)에서 1을 더한 곳에 새 노드를 입력하도록 구현
void AS_Push(ArrayStack* Stack, ElementType Data)
{
    Stack->Top++;
    Stack->Nodes[Stack->Top].Data = Data;
}

// 노드 제거(Pop) 연산: Top 값을 1만큼 낮추도록 구현, 주의!! 제거 연산에서는 Top 노드에 있던 데이터를 호출자에게 반환해야 함.
ElementType AS_Pop(ArrayStack* Stack)
{
    int Position = Stack->Top--;
    return Stack->Nodes[Position].Data;
}


ElementType AS_Top(ArrayStack* Stack)
{
    return Stack->Nodes[Stack->Top].Data;
}
int AS_GetSize(ArrayStack* Stack)
{
    return Stack->Top + 1;
}
int AS_IsEmpty(ArrayStack* Stack)
{
    return (Stack->Top == -1);
}