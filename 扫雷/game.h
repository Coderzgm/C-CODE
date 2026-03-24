#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c, char set);
//这里的int r和int c指的是ROW和COLS的初始化参数，后续才可使用

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int r, int c);


//布置雷
void SetMine(char mine[ROWS][COLS],int r,int c);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c);