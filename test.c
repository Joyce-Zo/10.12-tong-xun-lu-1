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
	int input = 0;	// ѡ��ģʽ
	struct Contact con;// ����ͨѶ¼con�������1000��Ԫ�ص������size
	InitContact(&con);// ��ʼ��ͨѶ¼Ϊ0��&��ַ���ܸı�����ֵ
	do
	{
		menu();
		printf("��ѡ��:->");
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
			printf("�˳�����!\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			Sleep(1000);
			break;
		}
			
	} while (input);
	return 0;
}