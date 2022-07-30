#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows;i++) {
		for (int j = 0; j < cols;j++) {
			board[i][j] = set;
		}
	}
}

//�������
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	printf("|- - - - - - - - - - - - - - ɨ����Ϸ  - - - - - - - - - - - - - |\n");
	//��ӡ�к�
	for (int i = 0; i <= col;i++) printf("%d ", i);
	putchar('\n');
	for (int i = 1; i <= row;i++) {
		//��ӡ�к�
		printf("%d ",i);
		for (int j = 1; j <= col;j++) {
			printf("%c ",board[i][j]);
		}
		putchar('\n');
	}
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}

//������
/*
* mineBoard:�����׵���
* ROW:�� COL:��
* thunder:�׵�����
*/
void LayThunder(char mineBoard[ROWS][COLS], int row, int col) {
	int thunder = THUNDER;//�׵�����
	while (thunder) {
		int x = rand() % row + 1;//ģ9��0~8,+1����1~9
		int y = rand() % col + 1;
		if (mineBoard[x][y] == '0') {
			mineBoard[x][y] = '1';
			thunder--;//����һ���� ��һ��
		}
	}
}

//ͳ������Χ������
static int getThunderCount(char mineBoard[ROWS][COLS],int x,int y) {
	//1.ѭ���Ų�
	int count = 0;
	for (int i = -1; i <= 1;i++) {
		for (int j = -1; j <= 1;j++) {
			count += (mineBoard[x + i][y + j]) - '0';
		}
	}
	return count;
	//2.���Ų�
	//return mineBoard[x - 1][y - 1] +
	//	mineBoard[x][y - 1] +
	//	mineBoard[x + 1][y - 1] +
	//	mineBoard[x + 1][y] +
	//	mineBoard[x + 1][y + 1] +
	//	mineBoard[x][y + 1] +
	//	mineBoard[x + 1][y + 1] +
	//	mineBoard[x - 1][y] - 8 * '0';
}

//�Ų���
/*
* mineBoard:�����׵���
* showBoard:չʾ����
* row:��
* col:��
*/
void FindThunder(char mineBoard[ROWS][COLS], char showBoard[ROWS][COLS], int row, int col) {
	//1.�����Ų������
	//2.��������ǲ�����
		//(1).���� - ��ʾ - ��Ϸ����
		//(2).������ - ͳ����Χ�׵����� - ��Ϸ����
	int x = 0, y = 0;
	int win = 0;//�Ų��������׵ı�־
	while (win < row * col - THUNDER) {
		printf("����������(�ո����):");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9) {
			if (mineBoard[x][y] == '1') {
				printf("��Ǹ����Ϸʧ�ܣ�����ը����\n");
				DisplayBoard(mineBoard, row, col);
				break;
			}
			else {
				int tCount = getThunderCount(mineBoard, x, y);
				showBoard[x][y] = tCount + '0';
				DisplayBoard(showBoard, row, col);
				win++;
			}
		}
		else {
			printf("���겻�Ϸ���������������\n");
		}
	}
	if (win) {
		printf("��ϲ�������������ף�\n");
		DisplayBoard(mineBoard, row, col);
	}
}
