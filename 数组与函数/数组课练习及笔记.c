#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	//int arr1[10] = { 1,2,3,4 };//不完全初始化,剩余的值默认初始化为0
//	//int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化，多的则会报错
//	//数组如果初始化了，那么可以不指定数组的大小，其根据初始化内容来推算
//	//char arr1[] = "abc";
//	//char arr2[] = { 'a','b','c' };
//
//	return 0;
//}
//int main()
//{
//	//int a = 10;//int
//	//int arr[10];//此类型为int[10]
//	//char ch[5];//ch的类型char[5]
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	              //0 1 2 3 4 5 6 7 8 9 
//	//printf("%d\n", arr[4]);//[]下标引用符
//	//printf("%d\n", arr[9]);//[]下标引用符
//	int i = 0;
//	for (i = 0; i < 10; i++)//数组元素的打印
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0; i < 10; i++)//数组元素的打印
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//下方printf打印该数组每个元素的地址
//	int i = 0;
//	for (i= 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//完全初始化三行五列
//	int arr2[3][5] = { 1,2,3,4,5,6, };//超出部分补到第二行
//	int arr3[3][5] = { {1,2},{3,4},{5,6} };//一行未满的用0补齐
//	printf("%d", arr1[2][4]);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d",&n);//我们要在数组arr中找到n中的数字//折半查找/二分查找
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof是计算变量的大小。该除法算式是用来计算数组arr【】的个数
//	//（为了保持准确性，避免人为计算错误）
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if(arr[i]==n)
//		{
//			printf("找到了，下标是%d\n", i);
//			flag = 1;//当找到时flag随即记为1
//			break;
//		}
//	}
//	if(flag==0)//上面的if条件不满足则不会执行if内部的代码
//	printf("找不到\n");
//	return 0;
// }
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;//  0,1,2,3,4,5,6,7,8,9(对应下标)
//	scanf("%d",&n);//我们要在数组arr中找到n中的数字
//	//折半查找/二分查找
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof是计算变量的大小。该除法算式是用来计算数组arr【】的个数
//	//（为了保持准确性，避免人为计算错误）
//	int left = 0;
//	int right = sz - 1;//描述变量最右边的下标数
//	int flag = 0;
//	while(left <= right)
//	{
//		int mid = left + (right - left) / 2; 
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//
//		else
//		{
//			printf("找到了，下标是:&dn"，mid); 
//			flag = 1
//				break;
//		}
//
//	}
//	if(flag==0)//上面的if条件不满足则不会执行if内部的代码
//	printf("找不到\n");
//	return 0;
//// }
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d",&n);//我们要在数组arr中找到n中的数字//折半查找/二分查找
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof是计算变量的大小。该除法算式是用来计算数组arr【】的个数
//	//（为了保持准确性，避免人为计算错误）
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if(arr[i]==n)
//		{
//			printf("找到了，下标是%d\n", i);
//			flag = 1;//当找到时flag随即记为1
//			break;
//		}
//	}
//	if(flag==0)//上面的if条件不满足则不会执行if内部的代码
//	printf("找不到\n");
//	return 0;
// }
//int is_leap_year(int y)  // 定义判断闰年的函数，参数y为年份
//{
//    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))  // 闰年条件：能被4整除但不能被100整除，或能被400整除
//        return 1;  // 满足条件返回1（是闰年）
//    else
//        return 0;  // 不满足条件返回0（不是闰年）
//}
//int get_days_of_month(int y, int m)  // 定义计算月份天数的函数，参数y为年份，m为月份
//{
//    int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  // 定义各月份天数数组（索引0不用）
//  //定义对应的下标 0，1， 2， 3， 4， 5， 6， 7， 8 ，9， 10，11，12 
//    int day = days[m];  // 获取该月份的基础天数
//
//    if (is_leap_year(y) && m == 2)  // 如果是闰年且月份是2月
//        day += 1;  // 2月天数加1（变成29天）
//
//    return day;  // 返回最终天数
//
//int main()  // 程序主函数
//{
//    int y = 0;  // 定义年份变量并初始化为0
//    int m = 0;  // 定义月份变量并初始化为0
//
//    scanf("%d %d", &y, &m);  // 从用户输入读取年份和月份
//
//    int d = get_days_of_month(y, m);  // 调用函数计算该年该月的天数
//
//    printf("%d\n", d);  // 输出计算结果
//
//    return 0;  // 程序正常结束
//}
//调用函数需要在主函数前放定义，编译时从上至下，不然需要声明定义的函数int（）；//注意；号
//
//int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//static修饰局部变量（只能使用一次变量）即创建好后销毁原初始值，但下次循环回来后保持变量后的值
//改变生命周期--放置在静态区了
//使用建议：一个变量出了函数后，我们还想保留值，等下次进入函数继续使用，就可以用static修饰
   











