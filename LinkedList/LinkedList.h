// 배열처럼 데이터 집합 보관 기능을 가지면서도 배열과 달리 유연하게 크기를 바꿀 수 있는 구조. 순차 접근이 단점.
// 순차 접근이기 때문에 특정 위치에 있는 노드에 접근하는 연산은 느리다.
// Linked List: 노드를 연결해서 만든 리스트
// 임의의 공간에 주소를 할당하고 이것들을 순차적으로 연결. Head 주소만 알면 순차적으로 다 접근 가능.

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

// 노드 생성(구조체)
typedef int ElementType;
typedef struct tagNode
{
	ElementType Data;
	struct tagNode* NextNode;	// 다음 노드
} Node;


// 함수의 원형 선언
Node* SLL_CreateNode(ElementType NewData);
void SLL_DestroyNode(Node* Node);
void SLL_AppendNode(Node** Head, Node* NewNode);
void SLL_InsertAfter(Node* Current, Node* NewNode);
void SLL_InsertNewHead(Node** Head, Node* NewHead);
void SLL_RemoveNode(Node** Head, Node* Remove);
Node* SLL_GetNodeAt(Node* Head, int Location);
int SLL_GetNodeCount(Node* Head);

#endif