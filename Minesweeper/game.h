#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<windows.h>

#define ROW 9
#define COL  9
#define ROWS 11
#define COLS 11

void game();
void init(char map[ROWS][COLS], int rows, int cols, char a);
void print(char map[ROWS][COLS], int row,int col);
void bury_mine(char map[ROWS][COLS],int row,int col);
void is_win(char map[ROW][COL], char map_mine[ROW][COL],int row,int col);
