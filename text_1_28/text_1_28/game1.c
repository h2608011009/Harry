
#define _CRT_SECURE_NO_WARNINGS 1

#include "game1.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');


	
	DisplayBoard(show, ROW, COL);


	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);

	FindMine(mine,show,ROW,COL);
}


void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <=row; i++)
	{
		if (i == 1)
			printf("  ");
		printf("%d ", i);
	}
		
	printf("\n");

	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT+1;
	while (count)
	{
		int x = rand()%9+1;
		int y = rand()%9+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}

}

int get_mine_count(char mine[ROWS][COLS], int x, int y)

{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x-1][y + 1] + mine[x][y - 1]+ mine[x][y+1] + mine[x + 1][y + 1] + mine[x+1][y] + mine[x+1][y - 1] - 8*'0';
	 
}


void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	
	int count = 0;
	int x = 0, y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{

		printf("请输入排查雷的坐标：>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;

			}
			else
			{

				count=get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//展开模块
				ExpandModule(mine,show,x,y);
				DisplayBoard(mine, ROW, COL);
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}

		if (win ==row*col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}

//展开模块
void ExpandModule(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y)
{

	int count1, count2, count3, count4, count6, count7, count8, count9;
	if (show[x][y] == '0')
	{

		count1 = get_mine_count(mine, x - 1, y - 1);
		if (x - 1 == 0 || y - 1 == 0 || x - 1 == 10 || y - 1 == 10)
			show[x - 1][y - 1] = '0';
		else if (x - 1 != 0 && y - 1 != 0 && x - 1 != 10 && y - 1 != 10 && count1 == 0)
		{
			show[x - 1][y - 1] = '0';
			ExpandModule(mine, show, x - 1, y - 1);

		}
		else 
		{
			show[x - 1][y - 1] = count1 + '0';
		}
		count2 = get_mine_count(mine, x - 1, y);

		if(x - 1 == 0 || y == 0 || x - 1 == 10 || y == 10)

			show[x - 1][y] = '0';
		else if (x - 1 != 0 && y != 0 && x - 1 != 10 && y != 10 && count2 == 0)
		{
			show[x - 1][y] = '0';
			ExpandModule(mine, show, x - 1, y);
		}
		else 
		{
			show[x - 1][y] = count2 + '0';
		}

		count3 = get_mine_count(mine, x - 1, y + 1);
		if (x - 1 == 0 || y + 1 == 0 || x - 1 == 10 || y + 1 == 10)

			show[x - 1][y+1] = '0';
		else if (x - 1 != 0 && y + 1 != 0 && x - 1 != 10 && y + 1 != 10 && count3 == 0)
		{
			ExpandModule(mine, show, x - 1, y + 1);
		}
		else 
		{
			show[x - 1][y + 1] = '0';
			show[x - 1][y+1] = count3 + '0';
		}

		count4 = get_mine_count(mine, x, y - 1);
		if (x == 0 || y - 1 == 0 || x == 10 || y - 1 == 10)

			show[x][y - 1] = '0';
		else if (x != 0 && y - 1 != 0 && x != 10 && y - 1 != 10 && count4 == 0)
		{
			show[x][y - 1] = '0';
			ExpandModule(mine, show, x, y - 1);
		}
		else 
		{
			show[x][y - 1] = count4 + '0';
		}


		count6 = get_mine_count(mine, x, y + 1);
		if (x == 0 || y + 1 == 0 || x == 10 || y + 1 == 10)

			show[x][y + 1] = '0';
		else if (x != 0 && y + 1 != 0 && x != 10 && y + 1 != 10 && count6 == 0)
		{
			show[x][y + 1] = '0';
			ExpandModule(mine, show, x, y + 1);
		}
		else 
		{
			show[x][y + 1] = count6 + '0';
		}


		count7 = get_mine_count(mine, x + 1, y - 1);
		if (x + 1 == 0 || y - 1 == 0 || x + 1 == 10 || y - 1 == 10)

			show[x + 1][y - 1] = '0';
		else if (x + 1 != 0 && y - 1 != 0 && x + 1 != 10 && y - 1 != 10 && count7 == 0)
		{
			show[x + 1][y - 1] = '0';
			ExpandModule(mine, show, x + 1, y - 1);
		}
		else 
		{
			show[x + 1][y - 1] = count7 + '0';
		}


		count8 = get_mine_count(mine, x + 1, y);
		if (x + 1 == 0 || y == 0 || x + 1 == 10 || y == 10)

			show[x + 1][y] = '0';
		else if (x + 1 != 0 && y != 0 && x + 1 != 10 && y != 10 && count8 == 0)
		{
			show[x + 1][y] = '0';
			ExpandModule(mine, show, x + 1, y);
		}
		else 
		{
			show[x + 1][y] = count8 + '0';
		}


		count9 = get_mine_count(mine, x + 1, y + 1);
		if (x + 1 == 0 || y + 1 == 0 || x + 1 == 10 || y + 1 == 10)

			show[x + 1][y + 1] = '0';
		else if (x + 1 != 0 && y + 1 != 0 && x + 1 != 10 && y + 1 != 10 && count9 == 0)
		{
			show[x + 1][y + 1] = '0';
			ExpandModule(mine, show, x + 1, y + 1);
		}
		else 
		{
			show[x + 1][y + 1] = count9 + '0';
		}


	}
}