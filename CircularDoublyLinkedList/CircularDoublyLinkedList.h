// 환형 링크드 리스트: 헤드가 테일을 물고 있응 형태의 링크드 리스트
// 시작을 알면 끝을 알 수 있어서 DLL_AppendNode() 함수의 성능을 획기적으로 
// 개선할 수 있고 뒤에서부터 노드를 찾아다니는 노드 탐색 루틴 구현 가능
// "헤드는 테일의 다음 노드, 테일은 헤드의 이전 노드"

#ifndef  CIRCULAR_DOUBLY_LINKEDLIST_H
#define  CIRCULAR_DOUBLY_LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
	ElementType Data;
	struct tagNode* PrevNode;
	struct tagNode* NextNode;
} Node;

Node* CDLL_CreateNode(ElementType NewData);
void CDLL_DestroyNode(Node* Node);
void CDLL_AppendNode(Node** Head, Node* NewNode);
void CDLL_InsertAfter(Node* Current, Node* NewNode);
void CDLL_RemoveNode(Node** Head, Node* Remove);
Node* CDLL_GetNodeAt(Node* Head, int Location);
int CDLL_GetNodeCount(Node* Head);

#endif 

