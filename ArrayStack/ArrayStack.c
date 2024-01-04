#include "ArrayStack.h"

// ���� �� ��� ����/�Ҹ� ����
void AS_CreateStack(ArrayStack** StackFunc, int Capacity)
{
    // ������ ���� ����ҿ� ����
    (*StackFunc) = (ArrayStack*)malloc(sizeof(ArrayStack));
    // �Էµ� Capacity��ŭ�� ��带 ���� ����ҿ� �̸� ����
    (*StackFunc)->Nodes = (Node*)malloc(sizeof(Node) * Capacity);
    // �迭�� �뷮 ����
    (*StackFunc)->Capacity = Capacity;
    // ù ��° �迭 ��Ҹ� ����Ű�� ÷�ڰ� 0�̹Ƿ� ��� �ִ� ������ �ֻ��� ��ġ�� �̺��� �۾ƾ� �ϱ� ������ -1�� �ʱ�ȭ
    (*StackFunc)->Top = -1;
}
// ����� ���� ���� ����Ҵ� �ݵ�� ����
void AS_DestroyStack(ArrayStack* Stack)
{
    // ��带 ���� ����ҿ��� ����
    free(Stack->Nodes);
    // ������ ���� ����ҿ��� ����
    free(Stack);
}

// ��� ����(Push) ����: �ֻ��� ����� �ε���(Top)���� 1�� ���� ���� �� ��带 �Է��ϵ��� ����
void AS_Push(ArrayStack* Stack, ElementType Data)
{
    Stack->Top++;
    Stack->Nodes[Stack->Top].Data = Data;
}

// ��� ����(Pop) ����: Top ���� 1��ŭ ���ߵ��� ����, ����!! ���� ���꿡���� Top ��忡 �ִ� �����͸� ȣ���ڿ��� ��ȯ�ؾ� ��.
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