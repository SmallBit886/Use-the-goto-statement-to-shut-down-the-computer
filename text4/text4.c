#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("���Խ���60���ػ��������룺\"˧��\".��ȡ���ػ���������\n�����룺>");
	scanf("%s", &input);
	if (0 == strcmp(input, "˧��"))
	{
		system("shutdown -a");


	}
	else
	{
		goto again;

	}


	return 0;
}