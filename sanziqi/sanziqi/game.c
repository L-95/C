
#include "game.h"

void new_game(char arr[ROW][COL], int row, int col)
{
	print_board(arr, ROW, COL);
	while (1)
	{
		palyer_move(arr, ROW, COL);
		system("cls");
		print_board(arr, ROW, COL);
		if (is_win(arr, ROW, COL) == 1)
		{
			printf("��ϲ�㣬��Ӯ�ˣ�\n");
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
		else if (is_win(arr, ROW, COL) == 0)
		{
			printf("��͵���һ���ˣ�");
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
		computer_move(arr, ROW, COL);
		system("cls");
		print_board(arr, ROW, COL);
		if (is_win(arr, ROW, COL) == 1)
		{
			printf("�˵Ŀٽţ�");
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
		else if (is_win(arr, ROW, COL) == 0)
		{
			printf("��͵���һ���ˣ�");
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

void init_board(char* arr, int row, int col)
{
	int sz = row*col;
	for (int i = 0; i < sz; i++)
	{
			*(arr+i) = ' ';
	}
}
extern void print_board(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
				printf(" %c |", arr[i][j]);
			else
				printf(" %c \n", arr[i][j]);
		}
			if (i<row-1)
			printf("---+---+---\n");
		}
}
void palyer_move(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������Ҫ���ӵ�����-��");
	scanf("%d%d", &x, &y);
	if (arr[x-1][y-1] ==' ')
	{
		arr[x-1][y-1] = '*';
	}
}
void computer_move(char arr[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}
int  is_win(char arr[ROW][COL], int row, int col)//�ж��Ƿ�ʤ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i] != ' '
			|| arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2] != ' '
			|| arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2] != ' '
			|| arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] != ' ')
			return 1;//ʤ������ 1��
		}
	if (is_draw(arr, ROW, COL) == 0)
		return 0;//ƽ�ַ��� 0��
	else
		return -1;//��������-1��
}
int is_draw(char arr[ROW][COL], int row, int col)//�ж��Ƿ�ƽ��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return -1;//�������� -1��
		}
	}
	return 0;//ƽ�ַ��� 0��
}
