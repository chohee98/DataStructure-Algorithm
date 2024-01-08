// 링크드 리스트 스택이 배열보다 좋은 점은 스택 용량에 제한을 두지 않는다는 점이다.
// 배열과 달리 인덱스를 활용하여 노드에 접근하지 않아 자신 위에 위치하는 노드에 대한 포인터를 갖고 있어야!

#ifndef LINNKEDLIST_STACK_H
#define LINNKEDLIST_STACK_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tagNode
{
	// 자유저장소에 할당된 문자열의 주소를 가리킴.
	// 자동메모리에 담긴 데이터는 컴파일러가 정해준 수명이 다하면 사라짐
	char* Data;
	// 자기 위에 쌓여있는 노드의 주소를 가리킴
	struct tagNode* NextNode;
} Node;

typedef struct tagLinkedListStack
{
	// 자유저장소에 존재하는 헤드 노드의 주소를 가리킴
	Node* List;	
	// 자유저장소에 존재하는 테일 노드의 주소를 가리킴 -> 최상위 노드에 대항 포인터 (순차탐색 시간 절약)
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
