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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			a = 1;
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}
		if (a == 1)
			break;
	} while (1);
}