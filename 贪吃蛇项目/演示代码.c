#define _CRT_SECUPE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	//设置控制台的相关属性
//	system("mode con cols=100 lines=30");//长和宽
//	system("title 贪吃蛇");
//	//getchar();或者如下
//	system("pause");
//	return 0;
//}
#include<Windows.h>
//int main()
//{
//	COORD pos = { 0,0 };//控制控制台坐标用COORD
//	COORD pos2 = { 10,20 };
//	return 0;
//}
//int main()
//{
//	//获得标准输出设备的句柄(用来标识不同设备的数值)
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//定义一个光标信息的结构体
//	CONSOLE_CURSOR_INFO cursor_info = { 0 };
//	//获取和houtput句柄相关的控制台上的光标信息，存放在cursur_info中
//	GetConsoleCursorInfo(houtput, &cursor_info);
//	//修改光标占比
//	cursor_info.dwSize = 50;
//	//设置和houtput句柄相关的控制台上的光标信息
//	SetConsoleCursorInfo(houtput, &cursor_info);
//
//	system("pause");
//	return 0;
//}
//void set_pos(short x,short y)
//{
//	//获得标准输出设备的句柄(用来标识不同设备的数值)
//	HANDLE houtput = NULL;
//	houtput = GetStdHandle(STD_OUTPUT_HANDLE);
//	//定义光标的位置
//	COORD pos = { 10,20 };
//	SetConsoleCursorPosition(houtput, pos);
//}

//int main()
//{
//	set_pos(10, 20);
//	printf("hehe\n");
//	return 0;
//}

//结果是1表示按过
//结果是0表示未按过
#define KEY_PRESS(vk) ((GetAsyncKeyState(vk)&1)?1:0)

//#include<locale.h>//本地化
//int main()
//{
//	char* ret = setlocale(LC_ALL, NULL);
//	printf("%s\n", ret);
//	
//	ret = setlocale(LC_ALL, "");
//	printf("%s\n", ret);
//	
//	return 0;
//}

//#include<locale.h>
//int main()
//{
//	//设置本地化
//	setlocale(LC_ALL, "");
//	char a = 'a';
//	char b = 'b';
//	printf("%c%c\n", a, b);
//
//	wchar_t wc1 = L'比';
//	wchar_t wc2 = L'特';
//	wprintf(L"%lc\n", wc1);
//	wprintf(L"%lc\n", wc2);
//	wprintf(L"%lc\n", '●');
//	wprintf(L"%lc\n", '★');
//	return 0;
//}