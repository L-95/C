#include "game.h"

void menu()
{
	printf("* * * * * * * * * * * * * * * * * * * * * \n\n");
	printf("  * * * * * * 1,开始游戏 * * * * * * * * \n\n");
	printf("  * * * * * * 2,结束游戏 * * * * * * * * \n\n");
	printf("* * * * * * * * * * * * * * * * * * * * * \n\n");
	printf("请输入您的选择—》");
}
void test()
{
	srand((unsigned int)time(NULL));
	do
	{
	menu();
	char arr[ROW][COL] = { ' ' };
	init_board(arr, ROW, COL);
	int input = 0;
	scanf("%d", &input);
		switch (input)
		{
		case 1: new_game(arr, ROW, COL);
				break;
			case 2: return;
				break;
			default: printf("您的输入有误，请重新输入！");
				break;
		}
	} while (1);
}

int main()
{
	test();
	return 0;
}