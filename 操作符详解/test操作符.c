#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换两个变量的数
//	printf("交换前：a=%d b=%d", a, b);
//
//	//b^b==a
//	a = a ^ b;//a'=a^b
//	b = a ^ b;//b=a'^b=a^b^b==a
//	a = a ^ b;//a'^b=a^b^a==b
//	printf("交换后：a=%d b=%d", a, b);
//
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	int n = 0;
//	scanf("%d", &n);
//	//统计n的二进制的补码的个数
//	while (n>0)//限制条件为n为0时，退出循环
//	{
//		if ((n % 2) == 1)
//			count++;
//
//		n /= 2;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//该函数用来统计一个整数n的二进制不嘛表示中1的个数
//缺陷：无法处理负数

//改进方案
//int main()
//{
//    int count = 0;
//    int n = 0;
//    scanf("%d", &n);
//
//    for (int i = 0; i < 32; i++) {  // 假设int是32位
//        if (((n >> i) & 1)==1 ) {
//            count++;
//        }
//    }
//    printf("count=%d\n", count);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int a, b, result;
//
//    result = (a = 5, b = 10, a + b);//result的值取决于最后一个数
//    printf("a = %d, b = %d, result = %d\n", a, b, result);
//    // 输出: a = 5, b = 10, result = 15
//
//    return 0;
//}
////arr[i] 等价于 *(arr + i)
//#include <stdio.h>
//
//int main() {
//    int arr[5] = { 1, 2, 3, 4, 5 };
//
//    printf("arr[2] = %d\n", arr[2]);        // 输出: 3
//    printf("*(arr + 2) = %d\n", *(arr + 2)); // 输出: 3
//
//    printf("2[arr] = %d\n", 2[arr]);        // 输出: 3 (不推荐，但语法正确)
//    printf("*(2 + arr) = %d\n", *(2 + arr)); // 输出: 3
//
//    return 0;
////}//下标引用操作符
//
//#include <stdio.h>//函数调用操作符
//
//// 函数声明
//int add(int a, int b);
//
//// 函数定义
//int add(int a, int b) {
//    return a + b;
//}
//int main() {
//    int x = 5, y = 3;
//
//    // 函数调用 - 带参数
//    int result = add(x, y);
//    printf("%d + %d = %d\n", x, y, result);  // 输出: 5 + 3 = 8
//
//    // 直接使用表达式作为参数
//    result = add(10, 20 * 2);
//    printf("10 + 40 = %d\n", result);        // 输出: 10 + 40 = 50
//
//    return 0;
//}

//声明一个结构体类型
//学生：名字，年龄，体重，成绩，学号

//#include<stdio.h>
////struct B
////{
////char
////};//该定义外函数初始化要{}调用内部信息
////打印用结构体变量.成员名
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//	char id[15];
//}s6,s7,s8;//全局变量-可以省略
//struct Stu s4;
//struct Stu s5;
//
//int main()
//{
//	double data1 = 0.0;
//	double data2 = 0.0;
//	//创建变量-局部变量
//	//初始化-使用大括号初始化
//	struct Stu s1 = {"zhangsan",20,85.5f,"2025010113"};
//	struct Stu s2 = {"lisi",18,90.5f,"2025040203"};
//	struct Stu s3 = {"wangwu",35,60.5f,"2025010208"};
//	//指定顺序来初始化用“.”
//	struct Stu s9 = {.age=22,.name="laowu",.score=88.5f,.id="2024020201"};
//
//	return 0;
//}

//int main()
//{
//	char a = 4;
//	char b = 127;
//	char c = a + b;//整型提升 
//	//1.有符号整数提升是按照变量的数据类型的符号位来提升的
//	//2.无符号整数提升，高位补0
//	printf("%d\n", c);//-125
//
//	return 0;
//}







 







