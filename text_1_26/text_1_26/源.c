#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//void print(int n)
//{
//	if (n > 9)
//		print(n/10);
//	printf("%d ", n%10);
//}
//
//
//int main()
//{
//
//	int num = 1234;
//	//scanf("%d", &num);
//	print(num);
//
//	return 0;
//}

//int len(char* str)
//{
//	int count=0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	
//	return count;
//
//}

//int len(char* str)
//{
//	if (*str != '\0')
//		return 1 + len(str + 1);
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	char arr[] = "shit";
//	int a = len(arr);
//	printf("%d", a);
//	return 0;
//}


////ì³²¨ÄÇÆõ1
//int count = 0;
//int fac(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return fac(n - 1) + fac(n - 2);
//
//}
//
////ì³²¨ÄÇÆõ2
//int fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//
//
//	}
//	return c;
//}
//
//
//int main()
//{
//	int num = 0,ret=0;
//	scanf("%d", &num);
//	ret = fib(num);
//	printf("count=%d,ret=%d", count, ret);
//	return 0;
//
//}

int main()
{
	char arr[] = { 'a', 'b', '\0' };
	printf("%d", sizeof(int));
	printf("%d", strlen(arr));
	return 0;

}