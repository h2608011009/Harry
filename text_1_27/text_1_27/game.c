#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;

		}
		

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;

		}
	}
	if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{

		for (j = 0; j < col; j++)
		{

			board[i][j] = ' ';
		}
	}

}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//一行数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		// 分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走：>\n");
	while (1)
	{
	printf("请输入要下的坐标：");
	scanf("%d%d",&x,&y);
	if (x >= 1 && x <= row &&y>=1&&y<=col)
	{
		if (board[x - 1][y - 1] == ' ')
		{

			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("已被占用\n");
		}
	}
	else
	{
		printf("坐标非法，请重新输入！\n");
	}
}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");

	
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][1] == board[i][0] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[1][i] == board[0][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[1][i];
		}

	}
	if (board[1][1] == board[0][0] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[0][0] && board[0][0] == board[0][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}

	if (1 == IsFull(board, ROW, COL))

	{
		return 'Q';
	}
	return 'C';
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			return 0;
		}
	}
	return 1;
}