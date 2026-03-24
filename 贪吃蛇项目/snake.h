#pragma once
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define POS_X 24
#define POS_Y 5

#define WALL L'□'
#define BODY L'●'
#define Food L'★'
//类型的声明

//蛇的方向
enum DIRECTION
{
	UP =1,
	DOWN,
	LEFT,
	RIGHT
};

//蛇的状态
//正常、撞墙、撞到自己、正常退出
enum GAME_STATUS
{
	OK,//正常
	KILL_BY_WALL,//撞墙
	KILL_BY_SELF,//撞到自己
	END_NORMAL//正常退出
};

//贪吃蛇身的节点类型（链表）
typedef struct SnakeNode
{
	//坐标
	int x;
	int y;
	//指向下一个节点的指针
	struct SnakeNode* next;
}SnakeNode,* pSnakeNode;//再命名转为结构体指针类型，通过指针找到结构体
//等效如下
//typedef struct SnakeNode* pSnakeNode;

//贪吃蛇
typedef struct Snake
{
	pSnakeNode _pSnake;//指向蛇头的指针
	pSnakeNode _pFood;//指向食物节点的指针
	enum DIRECTION _dir;//蛇的方向
	enum GAME_STATUS _status;//游戏的状态
	int _food_weight;//一个游戏的分数
	int _score;//总成绩
	int _sleep_time;//休息时间，时间越短，速度越快，反之...
}Snake,*pSnake;

//函数的声明
//定位光标位置的函数
void SetPos(short x, short y);

//游戏的初始化
void GameStart(pSnake ps);
//欢迎界面的打印
void WelcomeToGame();
//地图创建
void CreateMap();
//初始化蛇身
void InitSnake(pSnake ps);
//创建食物
void CreateFood(pSnake ps);

//游戏运行的逻辑
void GameRun(pSnake ps);
//打印帮助信息
void PrintHelpInfo(pSnake ps);
void Pause();
//蛇的移动-走一步
void SnakeMove(pSnake ps);
//判断下一个坐标是否为食物
int NextIsFood(pSnakeNode pn,pSnake ps);
//下一个位置是食物，吃掉食物
void EatFood(pSnakeNode pn, pSnake ps);
//下一个位置不是食物
void NoFood(pSnakeNode pn, pSnake ps);
//检测蛇是否撞墙
void KillByWall(pSnake ps);
//检测蛇是否撞到自己
void KillBySelf(pSnake ps);

//游戏善后工作
void GameEnd(pSnake ps);