#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stddef.h>

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	void* ret = dest;
//	// 前-后
//	if (dest < src)
//	{
//	while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//
//
//
//		}
//	return ret;
//	}
//	//后-前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src+num);
//		 
//
//
//
//		} 
//
//
//		return ret;
//	}
//}
//
//
//
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr1) / sizeof(&arr1);
//
//
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i <sz ;i++)
//	printf("%d ", arr1[i]);
//
//	return 0;
//}


//int main()
//{
//	char arr[10] = {0};
//	memset(arr, 1, 10);
//
//
//	return 0;
//}

//
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//	
//}; 
//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}*psa;


//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//#pragma pack(4) //设置默认对齐数为4
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//#pragma pack() //取消设置默认对齐数
//
//int main()
//{
//
//	struct S s = { 'c', 100, 3.14, "hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	Node n1;
//	struct Stu s1 ;
//	struct Stu s2 ;
//	return 0;
//	 
//}

//int main()
//{
//	int a = 123;
//	float b = 3.1411;
//	printf("%-5d,%d\n", a,a);
//	printf("%-8.2f,%d\n", b,a);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};

//int main()
//{
//
//
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}

//void Init(struct S *tmp)
//{
//	tmp->a = 100;
//	tmp->c='w';
//	tmp->d = 3.14;
//
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//
//
//	return 0;
//}

//struct A
//{
//	int _a : 2;//_a只是名字，一个变量，也可以写成a
//	int _b : 5;//数字表示bit位 
//	int _c : 10;
//	int _d : 30;
//};

//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET,
//};
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE,
//
//
//};
//
//int main()
//{
//
//	enum Sex s = MALE;
//	enum Color c = BLUE; 
//	printf("%d %d %d %d\n", RED, YELLOW, BLUE,s);
//	printf("%d %d %d\n", MALE,FEMALE,SECRET);
//
//	return 0;
//}

//union Un
//{
//	char c;
//	int i;
//
//
//};
//
//
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u);
//	printf("%p\n", &(u, c));
//	printf("%p\n", &(u, i));
//
//	return 0;
//}







int main()
{


	return 0;
}