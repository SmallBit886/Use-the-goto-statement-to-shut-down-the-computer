#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("电脑将在60秒后关机，请输入：\"帅哥\".就取消关机！！！！\n请输入：>");
	scanf("%s", &input);
	if (0 == strcmp(input, "帅哥"))
	{
		system("shutdown -a");


	}
	else
	{
		goto again;

	}


	return 0;
}