#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家1下棋
void PlayerOneChess(char board[ROW][COL], int row, int col);
void PlayerTwoChess(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerChess(char board[ROW][COL], int row, int col);

//判断输赢
/*
* 1.玩家赢 - T
* 2.电脑赢 - F
* 3.平局   - D
* 4.继续   - C
*/
char IsWin(char board[ROW][COL], int row, int col);

//平局
int IsDraw(board, row, col);