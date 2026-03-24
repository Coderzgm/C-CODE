#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
//int main()
//{
//	if (islower('a'))
//	{
//		printf("是小写\n");
//	}
//	else
//	{
//		printf("不是小写\n");
//	}
//	return 0;
//}
//int main()
//{
//	//写一个代码，将字符串中的小写字母转大写，其他字符不变
//	char arr[] = "I Am a Chinese.";
//	//将字符串中的字符逐个处理
//	//遇到小写转换为大写，再输出
//	//如果不是小写，正常输出
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (islower(arr[i]))
//			arr[i] -= 32;
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//	//char * p="*********"//常量字符串，不能被修改的.
//	char * ret = strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr2);
//	return 0;
//#include<string.h>
//void my_strcpy(char* dest,char* src)
//{
//	//拷贝\0前面的字符
//	while (*src !='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//拷贝\0
//}
//优化版本
//void my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标空间的其实地址
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = "*********";
//	my_strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[20] = "hello\0********";
//	char arr2[20] = "world";
//	char* r = strcat(arr1, arr2);//追加到hello后面，内存中会改变arr1中/0的位置到world后面
//	printf("%s\n", arr1);
//	printf("%s\n", r);
//	return 0;
//}
//#include<assert.h>
//char* my_strcat(char* dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1,目标空间的\0
//	while (*dest != '\0')
//	
//		dest++;
//		//2,拷贝
//	while (*dest++ = *src++);
//	return ret;
//}
int main()
{
	char arr1[20] = "hello\0**********";
	char arr2[] = "world";
	char* r = my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	printf("%s\n", r);
	return 0;
}
























