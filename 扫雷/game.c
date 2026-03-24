#define _CRT_SECURE_NO_WARNINGS

#include"game.h"//声明game.h里的所有函数，即都可使用
//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c,char set)
//char set指的是字符‘0’或‘*’即game（）里的
//InitBoard(show, ROWS, COLS,'*')
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

//打印棋盘
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

//布置十个雷
//随机找10个合法坐标
//1.在范围内
//2.没有布置过雷
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}


int GetMineCount(char mine[ROWS][COLS],int x, int y)
{
	int i = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		int j = 0;
		for (j = y - 1; j < y + 1; j++)
		{
			count += (mine[i][j] - '0');
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<r*c-EASY_COUNT)
	{
		printf("请输入要排查的坐标");
		scanf("%d %d", &x, &y);
		//判断坐标的有效性
		if (x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//该坐标不是雷，统计周围有几个雷
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}












