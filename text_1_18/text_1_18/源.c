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
	printf("��ע�⣬��ĵ�����1000�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�Ѿ��ر�");
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
//		printf("������֣�");
//			scanf_s("%d", &guess);
//		if (ret > guess)
//			printf("С��\n"); 
//		else	if (ret <guess)
//			printf("����\n");
//		else    if (ret =guess)
//			printf("����\n");
//	} while (ret != guess);
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play 0.exit****\n");
//	printf("*********************\n");
//	printf("��ѡ��");
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
//				printf("�˳���Ϸ");
//				break;
//		default:
//			printf("ѡ�����");
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

