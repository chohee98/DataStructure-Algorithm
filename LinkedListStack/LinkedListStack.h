// ��ũ�� ����Ʈ ������ �迭���� ���� ���� ���� �뷮�� ������ ���� �ʴ´ٴ� ���̴�.
// �迭�� �޸� �ε����� Ȱ���Ͽ� ��忡 �������� �ʾ� �ڽ� ���� ��ġ�ϴ� ��忡 ���� �����͸� ���� �־��!

#ifndef LINNKEDLIST_STACK_H
#define LINNKEDLIST_STACK_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tagNode
{
	// ��������ҿ� �Ҵ�� ���ڿ��� �ּҸ� ����Ŵ.
	// �ڵ��޸𸮿� ��� �����ʹ� �����Ϸ��� ������ ������ ���ϸ� �����
	char* Data;
	// �ڱ� ���� �׿��ִ� ����� �ּҸ� ����Ŵ
	struct tagNode* NextNode;
} Node;

typedef struct tagLinkedListStack
{
	// ��������ҿ� �����ϴ� ��� ����� �ּҸ� ����Ŵ
	Node* List;	
	// ��������ҿ� �����ϴ� ���� ����� �ּҸ� ����Ŵ -> �ֻ��� ��忡 ���� ������ (����Ž�� �ð� ����)
	Node* Top;
} LinkedListStack;

void LLS_CreateStack(LinkedListStack** Stack);
void LLS_DestroyStack(LinkedListStack* Stack);

Node* LLS_CreateNode(char* Data);
void LLS_DestroyNode(Node* _Node);

void LLS_Push(LinkedListStack* Stack, Node* NewNode);
Node* LLS_Pop(LinkedListStack* Stack);

Node* LLS_Top(LinkedListStack* Stack);
int LLS_GetSize(LinkedListStack* Stack);
int LLS_IsEmpty(LinkedListStack* Stack);

#endif
