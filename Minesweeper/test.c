#include "game.h"

void menu()
{
	printf("######################\n");
	printf("####1：.开始游戏.#########\n");
	printf("####0：.退出游戏.#########\n");
	printf("######################\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入——>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game();
			break;
		case 0: return;
			break;
		default:printf("您的输入有误，请重新输入！\n");
			break;
		}
	} while (1);
}

int main()
{
	test();
	return 0;
}