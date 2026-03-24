#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//int main()
//{
//	const int a = 10;
//	
//	int arr[a] = { 0 };
//
//	return 0;
//}
//


//
//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}
//枚举常量

//%s==打印字符串
//%f==小数
////%d==十进制数。%o==八进制数。%x==十六进制数
////scanf处理数值占位符会自动过滤空白字符如换行符，\t等等
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num >=18)
//	{
//		printf("年龄%d 已经成年，可以约",num);
//	}
//	else
//	{
//		printf("年龄%d 毛都没长齐，滚远点", num);
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d/n", &age);
//	if (age < 18)
//	{
//		printf("小孩");
//	}
//	else//(age>=18)
//	{
//		if (age < 44)
//			printf("青年");
//		else//age>=44
//		{
//			if (age < 69)
//				printf("中年");
//			else//(age>=69)
//				printf("老年");
//		}
//	}
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a=%d b=%d c=%d\n", a, b, c);
//
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while(n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 1;//循环变量的初始化
//	while (n<=100)//循环变量的循环结束判断
//	{
//		printf("%d ",n);//打印n值
//		n++;//循环变量的调整
//	}
//
//	return 0;int main()
//{
//	int n = 1;//循环变量的初始化
//	while (n )//循环变量的循环结束判断
//	{
//		printf("陈子昂我操你妈的臭逼第%d次", n);//打印n值
//		n++;//循环变量的调整
//	}
//
////	return 0;
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)//改变i--直到i+=3循环<=100
//	{
//			sum += i;//将i+=3的循环相加并赋值到sum
//	}
//	printf("%d\n", sum);//
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	
//	int cnt = 0;
//	do
//	{
//		num /= 10;
//
//		cnt++;
//	}while (num);
//
//	printf("%d\n",cnt);
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int num = a % b;
//	printf("%d %d", c, num);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a < 140)
//		printf("你不是天才");
//	else printf("Genius");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	
//	
//	if (a % 5 == 0) {
//		printf("a能被5整除");
//	}
//	else{
//			printf("不能被整除");
//	}
//	return 0;
////}
//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        printf("%d\n", a + b);
//    }
//    return 0;
//}
//int main()
//{
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF)
//	{
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a == b)//==是比较的意思，比较产生的等号
//		{
//			printf("%d=%d\n", a, b);
//		}
//		else {
//			printf("%d<%d\n", a, b);
//		}
//	}
//
//
//	return 0;
//}
//
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF)//循环读取输入，支持多组测试数据
//    {
//        while (a > 0)//内层循环：当a大于0时课继续执行
//        {
//            printf("*");//打印一个*号
//            a--;//关键操作：将a减小一个数，若大于0将继续进入内层循环
//        }
//        printf("\n");//出了内层循环后打印换行符重新进入scanf输入循环
//                     //注意：进入了scanf的循环需要输入数字才能继续进入内层循环
//                     //所以若外层函数只以scanf为主体，那么只执行一次内循环，程序结束 
//    }
//    return 0;
//int main() {
//   
//
//    for (int i = 0; i <100; i++) {
//        if (i % 3 == 0) {//if语句执行时if的条件不需要；号
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()//自定义函数
//{
//	printf("---------------------------------\n");
//    printf("---------    0 over     ---------\n");
//	printf("---------    1 play     ---------\n");
//	printf("---------------------------------\n");
//}
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//		system("cls");
//		int count = 10;
//		while (count)
//		{
//			printf("\n你还有%d次机会\n",count);
//			printf("猜数字：");
//			scanf("%d", &guess);
//			if (guess > r)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess<r)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("恭喜你，猜对了，数字是:%d\n", r);
//				break;
//			}
//			count--;
//	     }
//		if (count == 0)
//		{
//			printf("游戏失败，正确的数字是:%d\n", r);
//		}
//}
//int main()
//{
//	int input = 0;//设置随机数起点
//	srand((unsigned int)time(NULL));//随机数设置（来源于时间种子）
//	
//	do
//	{
//		menu();
//		//打印前面设置的函数menu；
//		printf("请选择>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();//指示前面制作的游戏
//		    break;
//		case 0:
//			printf("游戏结束，退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
int main()
{
	for (int i = 0; i = 1 ; i++)
	{
		printf("sb");
	}
}





























