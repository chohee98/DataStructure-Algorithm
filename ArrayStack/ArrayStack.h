#pragma once
// Stack: LIFO=Last In-First Out, FILO=First In-Last Out
// Stack ADT 특징: 요소의 삽입(Push)과 제거(Pop)가 한쪽 끝에서만 이루어지는 것
// "배열"을 이용한 스택은 용량을 동적으로 변경하는 비용이 크다는 단점이 있지만 구현이 간단하다는게 장점
// -> 각 노드를 동적으로 생성하고 제거하는 대신 스택 생성 초기에 사용자가 부여한 용량만큼의 노드 한번에 생성

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>

//스택 구조체
typedef int ElementType;
typedef struct tagNode
{
    ElementType Data;
} Node;

typedef struct tagArrayStack
{
    int Capacity;   // 용량 (얼마만큼의 노드를 가질 수 있는지?)
    int Top;        // 최상위 노드의 위치 (삽입/제거 연산시 접근)
    Node* Nodes;    // 노드 배열 (자유 저장소에 할당된 배열을 가리키는 용도)
} ArrayStack;


void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif
