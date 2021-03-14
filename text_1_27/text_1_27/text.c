#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"



void menu()
{
	printf("*****************************\n");
	printf("********1.play 0.exit********\n");
	printf("*****************************\n");
}



void main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		int a = 0;
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			a = 1;
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;

		}
		if (a == 1)
			break;
	} while (1);
}