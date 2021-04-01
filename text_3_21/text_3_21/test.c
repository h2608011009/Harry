#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stddef.h>
#include <assert.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//
//};
//
//#define PRINT(X,V) printf("I am "X" fuck %d\n",V)
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}

//;
//int main()
//{
//	int abc = 5;
//	PRINT(abc,5);
//
//	return 0;
//}

//
//#define DEBUG
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//
//	return 0;
//}

//void find_data(int arr[], int size)
//{
//	int i = 0, j = 0;
//	int flag = 0;
//	printf("data is : ");
//	for (; i < size; i++)
//	{
//		flag = 0;
//		for (j = 0; j < size; j++)
//		{
//			if (arr[j] == arr[i] && i != j)
//				flag = 1;
//		}
//		if (0 == flag)
//			printf(" %d  ", arr[i]);
//
//	}
//	printf("\n");
//}

#if 1
void find_data(int arr[], int size)
{
	assert(arr);
	assert(size > 0);

	int res = arr[0];
	int i = 1;
	int flag = 1;
	int x = 0, y = 0;

	//tep 1
	for (; i < size; i++){
		res ^= arr[i];
	}

	//tep 2
	for (i = 0; i < 32; i++){
		if (res & (flag <<= i))
			break;
	}

	//tep 3
	for (i = 0; i < size; i++){
		if (flag & arr[i])
			x ^= arr[i];
		else
			y ^= arr[i];
	}

	printf("%d , %d \n", x, y);
}
#endif

int main(){
	int arr[] = { 1, 2, 4, 3, 1, 5, 3 };
	int len = 0;
	len = sizeof(arr) / sizeof(arr[0]);
	find_data(arr, len);
	system("pause");
	return 0;
}
