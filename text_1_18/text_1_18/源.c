#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 6000");
again:
	printf("请注意，你的电脑在1000分钟内关机，如果输入：我是猪，就取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("已经关闭");
	}
	else
	{
		goto again;
	}
	return 0;
}

//void game()
//{
//	int ret = 0, guess = 0;
//	ret = rand() % 100 + 1;
//	do
//	{
//		printf("请猜数字：");
//			scanf_s("%d", &guess);
//		if (ret > guess)
//			printf("小了\n"); 
//		else	if (ret <guess)
//			printf("大了\n");
//		else    if (ret =guess)
//			printf("对了\n");
//	} while (ret != guess);
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play 0.exit****\n");
//	printf("*********************\n");
//	printf("请选择：");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//
//	do
//	{
//		menu();
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case(1):
//				game();
//				break;
//		case(2):
//				printf("退出游戏");
//				break;
//		default:
//			printf("选择错误");
//			break;
//
//		}
//
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//	}
//	printf("%lf", sum);
//	return 0;
//}

