#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"//声明game.h里的所有函数，即都可使用

void menu()
{
	printf("*****************************\n");
	printf("*********   1.play   ********\n");
	printf("*********   0.exit   ********\n");
	printf("*****************************\n");
}

void game()
{
	char mine[ROWS][COLS];//雷的信息布置在这个数组中
	char show[ROWS][COLS];//排查出雷的信息存放在这里
	//s初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	
	//DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);

	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请选择\n");
			break;
		}
	} while (input);
}



int main()
{
	test();

	return 0;
}













































































