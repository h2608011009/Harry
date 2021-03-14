#define _CRT_SECURE_NO_WARNINGS 1

//(*(void(*)())0)()
//
//void(*signal(int, void(*)(int)))(int )

#include <stdio.h>
//
//void menu()
//{
//	printf("*******************\n");
//	printf("** 1.Add   2.Sub **\n");
//	printf("** 3.Mul   4.Div **\n");
//	printf("**    0.Exit     **\n");
//	printf("*******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//
//}
//
//int Div(int x, int y)
//
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0, y = 0;
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//
//			printf("请输入两个操作数：");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//
//
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//
//		}
//		else
//		{
//			printf("选择错误\n");
//
//		}
//	}while(input);
//		return 0;
//
//}


//void print(char * str)
//{
//	printf("hehe:%s", str);
//
//}
//
//void test(void(*p)(char *))
//{
//
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

//void Print(char str[])
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	int a;
//	int * pa;
//	void(*p)(char) = Print;
//	(*p)("hello bit");
//	Print("123456");
//	/*p("hello world");*/
//}

//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*paAdd)(int,int) = Add;
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;  
//	return 0; 
//}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{

		int j = 0;
		for (j = 0; j < sz-1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				
			}
		}
	}

}

int main()
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubbble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]); 
	}

	return 0;
}