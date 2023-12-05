#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkedStack.h"
STACK MakeNull()
{
	STACK s;
	s = (NODE*)malloc(sizeof(NODE));
	if (s == NULL)
	{
		exit(1);
	}
	s->next = NULL;
	return s;
}
int Empty(STACK s)
{
	if (s->next)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
void Pop(STACK s)
{
	NODE* t;
	if (s->next)
	{
		t = s->next;
		s->next = t->next;
		free(t);
	}
}
ElemType Top(STACK s)
{
	if (s->next)
	{
		return s->next->data;
	}
	else
	{
		printf("NoElem\n");
		exit(1);
	}
}
void Push(STACK s, ElemType elem)
{
	NODE* t;
	t = (NODE*)malloc(sizeof(NODE));
	if (t == NULL)
	{
		exit(1);
	}
	t->data = elem;
	t->next = s->next;
	s->next = t;
}
void Destroy(STACK s)
{
	while (!Empty(s))
	{
		Pop(s);
	}
	free(s);
}