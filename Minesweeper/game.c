#include "game.h"

void game()
{
	char	board[ROWS][COLS] = { " " };
	char mine[ROWS][COLS] = { " " };
	init(board,ROWS,COLS,'#');
	init(mine, ROWS, COLS, '0');
	bury_mine(mine,ROW,COL);
	//print(mine, ROW, COL);
	is_win(board, mine,ROW,COL);
}

void init(char map[ROWS][COLS], int rows, int cols,char a)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			map[i][j] = a;
		}
	}
}

void print(char map[ROWS][COLS], int row, int col)
{
	for (int i =0; i <=row; i++)
	{
		
		for (int j = 1; j <= col; j++)
		{
			
			if (j == 1)
				printf(" %d ", i);
			if (i == 0)
				printf(" %d ", j);
			else
			{
				printf(" %c ", map[i][j]);
			}
		}
		printf("\n");
	}
}
void bury_mine(char map[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int count = 10;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (map[x][y] == '0')
		{
			map[x][y] = '1';
			count--;
		}
	}
}

static int  sweep_mine(char map[ROWS][COLS],int x,int y)
{
	if (map[x][y] == '0')
	{
		return  map[x + 1][y] + map[x + 1][y - 1]
					+ map[x][y - 1] + map[x - 1][y - 1]
					+ map[x - 1][y] + map[x - 1][y + 1]
					+ map[x][y + 1] + map[x + 1][y + 1]-8*'0';
	}
}

void is_win(char map[ROWS][COLS], char map_mine[ROWS][COLS],int row,int col)
{
	int x = 0;
	int y = 0;
	int count = 71;
	print(map, row, col);
	while (count)
	{
		printf("请输入你的坐标——>");
		scanf("%d%d", &x, &y);
		if (x > 0 && x<10 && y>0 && y < 10)
		{
			if (map_mine[x][y] == '1')
			{
				map[x][y] = '*';
				system("cls");
				print(map, row, col);
				printf("很遗憾，你输了！\n");
				break;
			}
			else
			{
				int  num = sweep_mine(map_mine, x, y);
				map[x][y] = num + '0';
				count--;
			}
		}
		else
		{
			printf("您的输入非法，请重新输入！\n");
		}
		system("cls");
		print(map, row, col);
	}
}