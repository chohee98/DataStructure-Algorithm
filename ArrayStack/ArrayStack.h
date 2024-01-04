#pragma once
// Stack: LIFO=Last In-First Out, FILO=First In-Last Out
// Stack ADT Ư¡: ����� ����(Push)�� ����(Pop)�� ���� �������� �̷������ ��
// "�迭"�� �̿��� ������ �뷮�� �������� �����ϴ� ����� ũ�ٴ� ������ ������ ������ �����ϴٴ°� ����
// -> �� ��带 �������� �����ϰ� �����ϴ� ��� ���� ���� �ʱ⿡ ����ڰ� �ο��� �뷮��ŭ�� ��� �ѹ��� ����

#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include <stdio.h>
#include <stdlib.h>

//���� ����ü
typedef int ElementType;
typedef struct tagNode
{
    ElementType Data;
} Node;

typedef struct tagArrayStack
{
    int Capacity;   // �뷮 (�󸶸�ŭ�� ��带 ���� �� �ִ���?)
    int Top;        // �ֻ��� ����� ��ġ (����/���� ����� ����)
    Node* Nodes;    // ��� �迭 (���� ����ҿ� �Ҵ�� �迭�� ����Ű�� �뵵)
} ArrayStack;


void AS_CreateStack(ArrayStack** Stack, int Capacity);
void AS_DestroyStack(ArrayStack* Stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* Stack);
ElementType AS_Top(ArrayStack* Stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif
