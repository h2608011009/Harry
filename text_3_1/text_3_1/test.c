
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	char a[] = { 3, 2, 1, 0,5 };
//	char b[] = "asdf"; 
//	printf("%d\n%d\n", strlen(a),strlen(b));
//
//	return 0;
//
//
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//
//	total = money;
//	empty = money;
//
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//
//
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (j == i)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1&&i!=j)
//				arr[i][j] = arr[i - 1][j] + arr[i-1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

int main()
{
	int killer = 'a';
	printf("%c", killer);


	return 0;
}