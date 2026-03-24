#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("*************1.play*************\n");
	printf("*************0.exit*************\n");
	printf("********************************\n");
}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	
}

void test()
{
	//打印菜单
	
	int input = 0;
	
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}