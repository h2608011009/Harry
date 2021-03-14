#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9
#define ROWS 2+ROW
#define COLS 2+COL
#define EASY_COUNT 10

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int get_mine_count(char mine[ROWS][COLS], int x, int y);
void ExpandModule(char mine[ROWS][COLS], char show[ROWS][COLS] , int x, int y);