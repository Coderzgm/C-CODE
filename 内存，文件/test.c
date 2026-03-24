#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("./../../test/data.txt", "r");
//	//这里的路径是相对路径，这表示再当前工程目录下的data.txt
//	FILE* pf = fopen("c;/user/desktop/test/data.txt", "r");//这是绝对路径的写法
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//打开文件“w”是输入用的，若无文件，则创建文件夹
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('a', pf);//该函数主要是再.txt文件内一个接一个输入abcd，
//	fputc('b', pf);//而不是覆盖上一个输入的字符
//	fputc('c', pf);
//	fputc('d', pf);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//写字符到标准输出流（屏幕）
//	fputc('a',stdout);
//	fputc('b',stdout);
//	fputc('c',stdout);
//	fputc('d',stdout);
//	//上下两种方式等价
//	putchar('a');
//	putchar('b');
//	putchar('c');
//	return 0;
//}

// #include<stdio.h>
//int main()
//{
//	//打开文件“w”是输入用的，若无文件，则创建文件夹
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//在文件中打印小写字母a到z，不受二进制制约，属于自然语言打印
//	int i = 0;
//	for (i = 'a'; i <= 'z'; i++)
//	{
//		fputc(i,pf);
//	}
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

 #include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt","w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int i = 0;
//		for (i = 'a'; i <= 'z'; i++)
//		{
//			fputc(i,pf);
//		}
//	//读文件
//	int ch = fgetc(pf);//读
//	printf("%c\n",ch);
//	putchar(ch);
//	fputc(ch, stdout); //打印
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//从键盘读取数据
//int main()
//{
//	int i = 0;
//	int ch = fgetc(stdin);//fgetc读取键盘(stdin)输入的东西
//	fputc(ch, stdout);//将输入赋值后ch的数在屏幕(stdout)显示出来
//	return 0;
//}
//例子
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int ch = fgetc(stdin);//键盘读取
//		fputc(ch, stdout);//屏幕打印
//	}
//	return 0;
//}

//int main()
//{
//	//char* fgets(char*str,int num,FILE * stream);
//	//功能:从 stream 指定输入流中读取字符串，至读取到换行符、
//	//文件未尾(EOF)或达到指定字符数(包含结尾的空字符\0)，然后将读取到的字符串存储到str指向的空间中。
//	return 0;
// }

int main()
{
	//打开文件
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
		{
			perror("fopen");
			return 1;
		}

	fputc("abcdefghi", pf);
	//写文件
	int ch = fgetc(pf);
	fputc(ch, stdout);
	printf("%c\n", ch);
	rewind(pf);
	printf("%c", ch);
		//关闭文件
		fclose(pf);
		pf = NULL;
	return 0;
}

