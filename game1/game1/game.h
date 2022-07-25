#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);

//��ʾ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//���1����
void PlayerOneChess(char board[ROW][COL], int row, int col);
void PlayerTwoChess(char board[ROW][COL], int row, int col);
//��������
void ComputerChess(char board[ROW][COL], int row, int col);

//�ж���Ӯ
/*
* 1.���Ӯ - T
* 2.����Ӯ - F
* 3.ƽ��   - D
* 4.����   - C
*/
char IsWin(char board[ROW][COL], int row, int col);

//ƽ��
int IsDraw(board, row, col);