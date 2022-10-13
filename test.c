#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"
void menu()
{
	printf("***********************************\n");
	printf("****** 1.Add        2.Del  ********\n");
	printf("****** 3.Seacher    4.Modify ******\n");
	printf("****** 5.Show	    6.Sort  *******\n");
	printf("****** 0.Exit               *******\n");
	printf("***********************************\n");
}
int main()
{
	int input = 0;	// 选择模式
	struct Contact con;// 创建通讯录con里面包含1000个元素的数组和size
	InitContact(&con);// 初始化通讯录为0，&地址才能改变里面值
	do
	{
		menu();
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			ShowContact(&con);
			Sleep(2000);
			break;
		case 6:
			break;
		case 0:
			printf("退出程序!\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			Sleep(1000);
			break;
		}
			
	} while (input);
	return 0;
}