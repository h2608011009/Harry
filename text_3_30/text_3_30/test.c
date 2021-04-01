#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int d = 10;
//	printf("%hd\n", d);
//
//
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//循环数据输入
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", (ch + 32));
//		getchar();//处理多余的\n字符
//	}
//	return 0;
//}

//int main()
//{
//	printf("%-15d\n", 0XABCDEF);
//	return 0;
//}

//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ch = 1;
	int i = 0, j = 0;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i - 1;j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%d ", ch);
		}

		printf("\n");
	}


	return 0;
}