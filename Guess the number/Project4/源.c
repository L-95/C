#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void  Menu()
{
	printf("#################\n");
	printf("## 1����ʼ��Ϸ ##\n");
	printf("## 2���˳���Ϸ ##\n");
	printf("#################\n");
}
void Game(void)
{
	int ans = rand() % 100;
	do
	{
		printf("��������Ҫ�µ����֣�");
		int a = 0;
		scanf("%d", &a);
		if (a > ans)
		{
			printf("�´��ˣ�\n");
		}
		if (a < ans)
		{
			printf("��С�ˣ�\n");
		}
		if (a == ans)
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	} while (1);	

	return 0;
}
int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		Menu();
		int menu = 0;
		scanf("%d", &menu);
		if (menu == 1)
			Game();
		else if (menu == 2)
			break;
		else
			printf("���������������������룡");
	}
			

		return 0;
	}