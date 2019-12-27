#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a = 0;
	printf("1,刷屏\n");
	printf("2,关机\n");
	printf("请输入你的选择:(除了1，2，别的不要乱按)\n");
	scanf("%d", &a);
ferst:	
	EnableMenuItem(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_GRAYED);
	if (a == 1)
	{
			system("start");
			for (int b = 0; b < 61;b++)
			printf("等待关机？\n");
			goto ferst;
	}
		else if (a == 2)
		{
			system("shutdown -s -t 600");
		}
		else
		{
			system("shutdown -s -t 0");
		}
	/*if (a==)
	{	Runtime.getRuntime().exec("cmd /c shutdown -s -t 600");
	}*/		
	return 0;

}