#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
//棋盘初始化
void Initboard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}
//棋盘的打印
void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	printf("-----扫雷游戏-----\n");
	int i = 0;
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);//行号的打印
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}