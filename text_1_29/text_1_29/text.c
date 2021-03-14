#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
 	int num = 0;
	int count = 0;
	int arr[5] = { 1,1,1,1,1 };
	int* p=arr;

	/*scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
			count++;

	}
	printf("%d\n", count);*/

	for (p = &arr[5]; p >= &arr[0]; p--)
	{
		*p = 0;
	}

	return 0;

}


//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//
//};
//
//int main()
//{
//
//	int a = 10;
//	struct stu s1 = { "ÕÅÈı", 20, "2019010305" };
//	printf("%s\n", s1.name);
//	
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int *p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p++;
//
//	}
//	return 0;
//}