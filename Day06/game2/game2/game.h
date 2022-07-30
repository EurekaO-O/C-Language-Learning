#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9 //行
#define COL 9 //列

#define ROWS ROW + 2 //行
#define COLS COL + 2 //列

#define THUNDER 10 //雷的数量


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//输出棋盘
void DisplayBoard(char board[ROWS][COLS],int row,int col);

//布置雷
void LayThunder(char mineBoard[ROWS][COLS], int row, int col);

//排查雷
void FindThunder(char mineBoard[ROWS][COLS],char showBoard[ROWS][COLS],int row,int col);
