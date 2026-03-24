#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Fac(n)
//{
//	if (n == 0)
//		return 1;
//	else 
//		return Fac(n - 1)* n;//fac(n-1)返回Face（n ）
//}
//
//int main()
//{
//
//	int n = 0;
//	scanf("%d\n",&n);
//	int r = Fac(n);
//	printf("%d\n",r);
//	return 0;
//}


//void Print(int n)
//{
//	if (n > 9)//if语句不满足条件时继续执行Print函数
//	{		  //直到满足条件后才开始执行printf打印，打印后再从最后一次/10执行printf打印再返回上一次printf%10的打印
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{ 
//
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);//先假设这个函数能够按顺序打印n的每一位（递归函数的作用）
//	return 0;
//}
int count = 0;
int Fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
int main()
{

	int n = 0;
	scanf("%d", &n);
	int r=Fib(n);//先假设这个函数能够按顺序打印n的每一位（递归函数的作用）
	printf("%d\n", r);
	printf("count=%d\n",count);
	return 0;
}


