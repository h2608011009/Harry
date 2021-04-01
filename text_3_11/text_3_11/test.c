#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>         /* For _MAX_PATH definition */
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <errno.h>
#include <windows.h>

//int main()
//{
//	int* p = (int *)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",*(p + i));
//		}
//		printf("\n");
//	}
//	free(p);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		printf("\n");
//	}
//	p = NULL;
//	return 0;
//}
//
//int main()
//{
//		int* p = (int *)calloc(10*sizeof(int));
//		if (p == NULL)
//		{
//			printf("%s\n", strerror(errno));
//		}
//		else
//		{
//			int i = 0;
//			for (i = 0; i < 10; i++)
//			{
//				*(p + i) = i;
//			}
//			for (i = 0; i < 10; i++)
//			{
//				printf("%d ", *(p + i));
//			}
//			printf("\n");
//		}
//			free(p);
//			p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int *)malloc(20);
//			if (p == NULL)
//			{
//				printf("%s\n", strerror(errno));
//			}
//			else
//			{
//				int i = 0;
//				for (i = 0; i < 10; i++)
//				{
//					*(p + i) = i;
//				}
//			}
//
//	return 0;
//}

//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//int main()
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//
//
//	return 0;
//}

char* GetMemory(char *p)
{
	p = (char*)malloc(100);
	return p;
}

int main()
{
	char* str = NULL;
	str=GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;


	return 0;
}