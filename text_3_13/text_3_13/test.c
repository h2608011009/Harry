#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

//struct S
//{
//	int n;
//	int arr[0];
//};
//
//int main()
//{
//	struct S s;
//
//	struct S* ps = (struct S*)malloc(sizeof(struct) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	struct S*ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}

int *test()
{
	static int a = 10;
	return &a;
}

int main()
{
	int*p = test();
	*p = 20;

	return 0;
}