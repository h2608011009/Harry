#define _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include <stdio.h>
#include <assert.h>
////int main()
////{
////	int a[] = { 1, 2, 3, 4 };
////	printf("%d %d %d\n", *a, &a+1,sizeof(&a+1));
////
////}
//
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//
//	int *p = a;
//	printf("%d\n", *p+1);
//	//int *ptr = (int*)(&a + 1);
//	//printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//  //abcdef
//  //1111 f
//  //1110 e
//  //1101 d
//  //1100 c
//
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		int tmp = *right;
//			*right = *left;
//			*left = tmp;
//			left++;
//			right--;
//	}
//
//}
//
//
//int main()
//{
//	char arr[256] = { 0 };
//	scanf("%s", arr);//ÓÃgets()º¯ÊýÃâ³ý¿Õ¸ñ
//
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//
//
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	int sum = 0;
//	int i = 0;
//	int ret=0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//
//
//}

int main()
{
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = line; i > 1; i--)
	{
		int j = 0;
		for (j = 0; j < line+1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (i-2) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}