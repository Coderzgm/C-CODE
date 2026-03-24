#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;//变量创建的本质是向内存申请4个字节的空间，存放10进去
//	//&a;//取地址a-取出a的地址(指针)
//	int* pa = &a;//取出a的地址放到指针变量里
//	// pa是用来存放地址（指针）的变量，所以pa也叫--指针变量
//	// int8是pa的类型
//	//&-取地址操作符
//	//a&b按位与
//	//%p专门用来打印地址的
//	printf("%p\n", &a);
//	
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;//专门存储指针（地址）变量
//	//存放在指针变量中的值，我就认为是地址
//	//指针-地址-0x0012ff40-常量的编号
//	//指针变量是变量（即存放地址）
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa;//*pa就是a
//	printf("%zd\n", sizeof(pa));
//	//指针变量的长度与类型无关，在相同平台下，大小都是相同的
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;//int类型指针只能访问4个字节
//	char* pa = &a;//char类型的指针只能访问1个字节
//	*pa = 0;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9.10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//取地址arr下标为0的元素，设置指针*p指明
//	while (p < &arr[sz])
//	{
//		printf("%d ", *p);//打印指针指示的地方
//		p++;
//	}
//	return 0;
//}
//size_t my_strlen(char* p)
//{
//    char* q = p;
//    while (*q != '\0')
//    {
//        q++;
//    }
//    return q - p;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    size_t len = my_strlen(arr);
//    printf("%zd\n", len);
//    return 0;
//}
//const—常数性（不能改变）
//int main()
//{
//	const int n = 10;//n是不能改的
//	//n在C语言中被成为常变量
//	//常变量的意思是，n的本质是变量，但是不能被修改
//	n = 100;
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	const int n = 10;
   //n=100;//err

//const也是可以修饰指针变量的 
//const放在*的左边：const int* p
// const限制的是*p，也就是指针指向的内容不能通过p来修改了
// 但是p变量本身是可以修改的（修改p的指向）
// const in* p=&n；
// *p=100；//err
// p=&b；//ok
	// 
//const放在*的右边： int* p const
//p不可以改变
//*p可以改变
//int* p = &n;//定义指针p，指向n的地址
//*p = 100;//指针不受const限制
//p：是一个变量，里面存放的是地址
//*p：p指向变量的内容，p本质也是地址
//printf("%d\n", n);
//return 0;
//}
//int main()
//{
//	int* p;//p是局部变量，没有初始化，编译器随机指定一个值，也就是p是一个随机值
//	
//	* p = 20;//p就是野指针
//	return 0;
//}
//int main()
//{
//	int* p = NULL;//避免野指针出现，NULL限制*p为空
//
//	return 0;
//}
//#define NDEBUG//终止程序中的所有assert禁言函数
//#include<assert.h>//使用assert需要包含该头文件
//int main()
//{
//	
//	int* p = NULL;
//	assert(p != NULL);//!是不等于的意思，这里是希望指针不为空的，如果为空则断言
//	//assert是断言函数，终止程序运行，若等于NULL则终止运行
//	return 0;
//}
//Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a,b);//传值调用
//	return 0;
////}
//void Swap1(int x, int y)//行参，传值调用，但这里不能指向已经定了地址的a，b
//{
//	int z = x;
//	x = y;
//	y = z;
//}
//当实参传递给行参时，行参时实参的一份拷贝
//行参是具有独立空间的
//行参的值是来自实参的 
//对行参的修改不影响实参
//
//void Swap2(int* pa, int* pb)
//{
//	int c = 0;
//	c = *pa;//c=a
//	*pa = *pb;//a=b
//	*pb = c;//b=c
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数将a和b的值进行交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//Swap1(a, b);//实参
//	Swap2(&a,&b);//传址调用
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}

//数组名是数组首元素的地址

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd\n",sizeof(arr) );
//	//sizeof(数组名)，这里的数组名表示整个数组大小，单位字节
//	//&数组名，这里取出的就是整个数组的地址
//	printf("arr    =%p\n", arr);//首元素的地址
//	printf("arr+1  =%p\n", arr+1);//
//
//	printf("&arr[0]  =%p\n", &arr[0]);//首元素的地址
//	printf("&arr[0]+1=%p\n", &arr[0]+1);//
//
//	printf("&arr   =%p\n", &arr);//整个数组的地址
//	printf("&arr+1 =%p\n", &arr+1);//数组类型改变输出结果
//
//
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	//使用指针来操作数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr;//取地址赋给指针变量p，
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p+i);//p+i是下标为i这个元素的地址
//	}                    //也可以写成arr+i
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+1));
//		printf("%d ", *(arr+1));
//		printf("%d ", arr[i]);
//		printf("%d ", p[i]);
//		//指针变量和定义的数组地址可以转换输出
//	}
//	return 0;
//}
//void test(int arr[])//这里虽然写成了数组的形式，但是本质是指针
//{		//等于int *arr
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2=%d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int szl = sizeof(arr) / sizeof(arr[0]);
//	printf("szl=%d\n", szl);
//
//	test(arr);
//
//	return 0;
//}//总结：一堆数组传参，行参部分可以写成数组的形式，也可以写成指针的形式
//冒泡排序的思想：两两相邻元素进行比较 
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz ; j++)
//	{
//		printf( "%d ",arr[j] );
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr数组中的sz个元素进行排序 -升序
//	print_arr(arr,sz);
//	bubble_sort(arr, sz);
//	print_arr(arr,sz);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("%p\n",&Add);
//	printf("%p\n",Add);
//
//	int (*pf)(int,int) = &Add;
//	//pf就是函数地址（指针）的变量-函数指针变量
//	int r = (*pf)(4, 7);
//	printf("%d\n",r);
//	return 0;
//}
//int main()
//{
//	//(void(*)())0--强制类型转换
//	//将int类型的0转换成函数指针类型，让0做函数的地址
//	(*(void(*)())0)();//1
//	//将0转换成函数的地址，无参数，返回类型是void
//	//是一次函数的调用
//
//	return 0;
//}
//typedef unsigned int uint;//类型重命名，简化
//typedef int* pint;//类型重命名，简化
//int main()
//{
//	unsigned int num1;
//	uint num2;
//
//	int* p1;
//	pint p2;
//
//	return 0;
//}
//定义指针时，int *p1，p2/这里p1是指针，p2是int整型
//int *p1，*p2；
//另一种方法
//typedef int* pint
//pint p3.p4；//都是指针类型
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int,int) = &Add;
//	int (*pf2)(int,int) = &Add;
//	//希望产生一个数组，来存放函数指针，这个时候就需要函数指针数组
//	int (*pfArr[4])(int, int) = { Add,Sub };
//	//pfArr就是函数指针数组
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
// int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//int main()
//{
//	int r = 0;
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//函数指针数组
//	scanf("%d %d", &x, &y);
//	do
//	{
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Add(x,y);
//			printf("r=%d\n",r);
//			break;
//		case 2:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Sub(x, y);
//			printf("r=%d\n",r);
//			break;
//		case 3:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Mul(x, y);
//			printf("r=%d\n", r);
//			break;
//		case 4:
//			printf("请输入两个操作数");
//			scanf("%d %d", &x, &y);
//			r = Div(x, y);
//			printf("r=%d\n", r);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////转移表简化
//int main()
//{
//	int r = 0;
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//函数指针数组
//	int(*pf[5])(int, int) = { NULL,Add,Sub,Mul,Div }; 
//	 
//	do
//	{
//		scanf("%d", &input);
//		if(input >= 1 && input <= 4)
//		{ 
//			printf("请输入两个操作数\n");
//			scanf("%d %d", &x, &y);
//			r = pf[input](x, y);
//			printf("r=%d\n", r);
//		}
//		else if (input == 0)
//			printf("r=%d\n", r);
//		
//		else
//			printf("选择错误，重新选择\n");
//	} while (input);
//	return 0;
//}
 //回调函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void care(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int r = 0;
//	printf("请输入两个操作符：");
//	scanf("%d %d", &x,&y);
//	r = pf(x, y);
//	printf("%d",r);
//}
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		scanf("%d", &input);
//		if (input <= 4 && input >= 0)
//		switch(input)
//		{
//		case 1:
//				care(Add);
//				break;
//		case 2:
//				care(Sub);
//				break;
//		case 3:
//				care(Mul);
//				break;
//		case 4:
//				care(Div);
//				break;
//		case 0:
//			printf("退出计算器\n");
//				break;
//		default:
//					printf("输入错误\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
// 定义函数指针类型
//typedef void (*PrintDigitFunc)(void);
//// 数字对应的中文大写打印函数
//void printYi() { printf("壹"); }
//void printEr() { printf("贰"); }
//void printSan() { printf("叁"); }
//void printSi() { printf("肆"); }
//void printWu() { printf("伍"); }
//void printLiu() { printf("陆"); }
//void printQi() { printf("柒"); }
//void printBa() { printf("捌"); }
//void printJiu() { printf("玖"); }
//void printLing() { printf("零"); }
//// 函数指针数组 - 索引1-9对应数字1-9的打印函数
//PrintDigitFunc digitPrinters[] = { NULL,printYi,printEr,printSan,printSi,printWu,printLiu,printQi,printBa, printJiu };
//// 打印数字和单位的函数
//void printDigitWithUnit(int digit, const char* unit, int* has_output) {
//    if (digit > 0 && digit <= 9) {
//        digitPrinters[digit]();  // 通过函数指针数组调用对应的打印函数
//        printf("%s", unit);
//        *has_output = 1;
//    }
//}
//// 检查是否需要补零
//void checkZeroSupplement(int current_digit, int* has_output, int has_following_digits) {
//    if (*has_output && current_digit == 0 && has_following_digits) {
//        printLing();
//    }
//}
//int main() {
//    int number;
//    int flag = 1;
//    while (flag) {
//        printf("请输入一个万以内的数字 (0-99999) : ");
//        scanf("%d", &number);
//        if (number < 0 || number > 99999) {
//            printf("输入的数字超出范围! \n");
//            continue;
//        }
//        if (number == 0) {
//            printf("零元整\n");
//            continue;
//        }
//        // 分解数字的各个位
//        int wan = number / 10000;
//        int qian = (number % 10000) / 1000;
//        int bai = (number % 1000) / 100;
//        int shi = (number % 100) / 10;
//        int ge = number % 10;
//
//        int has_output = 0;
//        // 处理万位
//        printDigitWithUnit(wan, "万", &has_output);
//        // 处理千位
//        if (qian > 0) {
//            printDigitWithUnit(qian, "仟", &has_output);
//        }
//        else {
//            checkZeroSupplement(qian, &has_output, (bai > 0 || shi > 0 || ge > 0));
//        }
//        // 处理百位
//        if (bai > 0) {
//            printDigitWithUnit(bai, "佰", &has_output);
//        }
//        else {
//            checkZeroSupplement(bai, &has_output, (shi > 0 || ge > 0));
//        }
//        // 处理十位
//        if (shi > 0) {
//            printDigitWithUnit(shi, "拾", &has_output);
//        }
//        else {
//            checkZeroSupplement(shi, &has_output, (ge > 0));
//        }
//        // 处理个位
//        if (ge > 0 && ge <= 9) {
//            digitPrinters[ge]();  // 个位不需要单位
//        }
//        printf("元整\n");
//    }
//    return 0;
//}
//#include<stdlib.h>//qsort函数需要包含的头文件
////4个参数
//void qsort(void* base,//指向待排序数组的第一个元素，就可以接收任意类型的地址
//	size_t num,//待排序数组的元素个数
//	size_t size,//待排序数组中元素的大小，单位是字节
//	int(*compar)//compar是一个函数指针，这个指针可以接受一个函数地址
//	//这个函数是使用qsort函数的人来设计的，用来比较两个数组元素的大小
//);
//#include<stdlib.h>
//#include<string.h>
////打印数组
//void print_arr(int arr[], int sz)
//{
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	printf("\n");
//}
//
//int cmp_int(const void* e1, const void* e2)//该函数能够比较两个元素
//{
//	return(*(int*)e1 - *(int*)e2);//(从a地址取出的整数值) - (从b地址取出的整数值)
//}
////测试qsort函数来排序整型数组
//void test1()
//{
//	int arr[] = {9,8,7,6,4,5,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr,sz);
//}
//struct Stu//结构体后面会讲到
//{
//	char name[20];
//	int age;
//	//struct Stu_s={"zhangsan",20}
//	//结构体printf("%d\n",(*ps).age)
//	//等效于printf("%d\n",ps->age)
//};
////测试qsort函数来排序结构体的数据
////先按照名字(字符串)比较大小使用strcmp
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp((*(struct Stu*)e1).name, (*(struct Stu*)e2).name);//解应用比较字符串大小
//	//stramp字符串比较函数需要包含头文件#include<string.h>
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;//强制类型转化比较结构体数组中的数字
//	//stramp字符串比较函数需要包含头文件#include<string.h>
//}
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan",20},{"lisi",25},{"wangwu",18} };
//	//两个字符串比较大小，比较对应位置字符大小
//	int sz= sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);//排序函数qsort需要包含头文件#include<stdlib.h>
//};
//int main()
//{
//	//test1(); 
//	test2();
//	
//	return 0;
//}
//int main()
//{
//char* p = "abcdef";
//printf("%zd\n", sizeof(p));
//printf("%zd\n", sizeof(p + 1));
//printf("%zd\n", sizeof(*p));//1
//printf("%zd\n", sizeof(p[0]));//1,p[0]->*(p+0)->*p
//printf("%zd\n", sizeof(&p));//4/8,&p是指针变量p的地址，是一个二级指针
//printf("%zd\n", sizeof(&p + 1));
//printf("%zd\n", sizeof(&p[0] + 1));//4/8，&p[0] + 1是b的地址
//return 0;
//}
int main()
{
	char* p = "abcdef";
	printf("%zu\n", strlen(p));//6
	printf("%zu\n", strlen(p + 1));//5
	printf("%zu\n", strlen(&p));
	printf("%zu\n", strlen(&p + 1));
	printf("%zu\n", strlen(&p[0] + 1));
	//printf("%zu\n", strlen(*p));//err
	//printf("%zu\n", strlen(p[0]));//err
	return 0;
}








