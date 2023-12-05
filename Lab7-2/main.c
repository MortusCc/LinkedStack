#define _CRT_SECURE_NO_WARNINGS 1
#include "LinkedStack.h"
int main()
{
	STACK s;
	s = MakeNull();
	char Str[MAX + 1] = "\0";
	int p = scanf(" %s", Str);
	if (p == EOF)
	{
		exit(1);
	}
	for (int i = 0; Str[i] != '\0'; i++)
	{
		if (Str[i] == '(')
		{
			Push(s, '(');
		}
		else if (Str[i] == ')')
		{
			if (Empty(s))
			{
				printf("not match");
				return 0;
			}
			else
			{
				Pop(s);
			}
		}
		else{}
	}
	if (Empty(s))
	{
		printf("match");
	}
	else
	{
		printf("not match");
	}
	return 0;
}