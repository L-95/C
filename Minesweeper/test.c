#include "game.h"

void menu()
{
	printf("######################\n");
	printf("####1��.��ʼ��Ϸ.#########\n");
	printf("####0��.�˳���Ϸ.#########\n");
	printf("######################\n");
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�����롪��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game();
			break;
		case 0: return;
			break;
		default:printf("���������������������룡\n");
			break;
		}
	} while (1);
}

int main()
{
	test();
	return 0;
}