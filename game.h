#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL  3

void init_board(char arr[ ROW][COL ],int row,int col );
void print_board(char arr[ ROW][COL ], int row, int col);
void new_game(char arr[ROW][COL],int row,int col);
void palyer_move(char arr[ROW][COL],int row,int col);
void computer_move(char arr[ROW][COL], int row, int col);
int  is_win(char arr[ROW][COL], int row, int col);
int is_draw(char arr[ROW][COL], int row, int col);