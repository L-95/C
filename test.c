#include "game.h"

void menu()
{
	printf("* * * * * * * * * * * * * * * * * * * * * \n\n");
	printf("  * * * * * * 1,��ʼ��Ϸ * * * * * * * * \n\n");
	printf("  * * * * * * 2,������Ϸ * * * * * * * * \n\n");
	printf("* * * * * * * * * * * * * * * * * * * * * \n\n");
	printf("����������ѡ�񡪡�");
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
			default: printf("���������������������룡");
				break;
		}
	} while (1);
}

int main()
{
	test();
	return 0;
}