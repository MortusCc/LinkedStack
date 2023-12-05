#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef char ElemType;
typedef struct node
{
	ElemType data;
	struct node* next;
}NODE,*STACK;
#define MAX 100
STACK MakeNull();
int Empty(STACK s);
void Pop(STACK s);
ElemType Top(STACK s);
void Push(STACK s, ElemType elem);
void Destroy(STACK s);
