#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "contact.h"

// 函数实现
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->sz = 0;// 设置通讯录里最初只有0个元素
};

void AddContact(struct Contact* ps)
{
	if (ps->sz == MAX)
	{
		printf("通讯录已满,无法添加!\n");
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->sz].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->sz].sex);
		printf("请输入号码:>");
		scanf("%s", ps->data[ps->sz].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->sz].addr);
		ps->sz++;
		printf("添加成功!\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->sz == 0)
	{
		printf("通讯录为空!\n");
	}
	else
	{
		int i = 0;
		for (i = 0; i < ps->sz; i++)
		{
			printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n","姓名","年龄","性别","号码","地址");
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", 
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr );
		}
	
	}

}