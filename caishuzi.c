#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//int a = 0;
	//int b = 0;
	//c = a = b;
	//int c = 0;

	return 0;
}
void  Menu()
{
	printf("#################\n");
	printf("## 1：开始游戏 ##\n");
	printf("## 2：退出游戏 ##\n");
	printf("#################\n");
}
void Game()
{
	int ans = rand() % 100;
	do
	{
		printf("请输入您要猜的数字：");
		int a = 0;
		scanf("%d", &a);
		if (a > ans)
		{
			printf("猜大了！\n");
		}
		if (a < ans)
		{
			printf("猜小了！\n");
		}
		if (a == ans)
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	} while (1);
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
			printf("您的输入有误，请重新输入！");
	}
	return 0;
}
