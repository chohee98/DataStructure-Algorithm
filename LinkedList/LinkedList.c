#include "LinkedList.h"

// 노드 생성 (자유저장소에)
Node* SLL_CreateNode(ElementType NewData)
{
	// 필요한 만큼 메모리를 사용할 수 있는 장점을 위해 "동적 메모리 할당"
	Node* NewNode = (Node*)malloc(sizeof(Node));

	NewNode->Data = NewData;
	NewNode->NextNode = NULL;

	return NewNode;
}

// 노드 소멸
void SLL_DestroyNode(Node* Node)
{
	free(Node);
}

// 노드 추가 (Tail에 이어 붙이는 방식)
// 포인터: 메모리 주소를 담는 변수
// List 포인터 변수의 주소를 전달하기 위한 이중포인터 (포인터가 가진 값이 아닌 포인터 자신의 주소)
void SLL_AppendNode(Node** Head, Node* NewNode) 
{
	// 헤드 노드가 NULL이라면 새로운 노드가 Head가 된다.
	if ((*Head) == NULL)
	{
		*Head = NewNode;
	}
	else
	{
		// 테일을 찾아 NewNode 연결
		Node* Tail = (*Head);
		while(Tail->NextNode != NULL)
		{
			Tail = Tail->NextNode;
		}
		Tail->NextNode = NewNode;
	}
}

// 노드 삽입
void SLL_InsertAfter(Node* Current, Node* NewNode)
{
	NewNode->NextNode = Current->NextNode;
	Current->NextNode = NewNode;
}
void SLL_InsertNewHead(Node** Head, Node* NewHead)
{
	if (Head == NULL)
	{
		(*Head) = NewHead;
	}
	else
	{
		NewHead->NextNode = (*Head);
		(*Head) = NewHead;
	}
}

// 노드 제거
void SLL_RemoveNode(Node** Head, Node* Remove)
{
	if (*Head == Remove)
	{
		*Head = Remove->NextNode;
	}
	else
	{
		Node* Current = *Head;
		while (Current != NULL && Current->NextNode)
		{
			Current = Current->NextNode;
		}
		if (Current != NULL)
			Current->NextNode = Remove->NextNode;
	}
}

// 노드 탐색 (차근차근 탐색)
Node* SLL_GetNodeAt(Node* Head, int Location)
{
	Node* Current = Head;

	while (Current != NULL && (--Location) >= 0)
	{
		Current = Current->NextNode;
	}
	return Current;
}

// 노드 개수 세기
int SLL_GetNodeCount(Node* Head)
{
	int Count = 0;
	Node* Current = Head;

	while (Current != NULL)
	{
		Current = Current->NextNode;
		Count++;
	}
	return Count;
}