#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9 //��
#define COL 9 //��

#define ROWS ROW + 2 //��
#define COLS COL + 2 //��

#define THUNDER 10 //�׵�����


//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//�������
void DisplayBoard(char board[ROWS][COLS],int row,int col);

//������
void LayThunder(char mineBoard[ROWS][COLS], int row, int col);

//�Ų���
void FindThunder(char mineBoard[ROWS][COLS],char showBoard[ROWS][COLS],int row,int col);
