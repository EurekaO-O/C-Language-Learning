#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int thunder = 10;//�׵�����

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
void LayThunder(char mineBoard[ROWS][COLS], int row, int col, int thunder) {
	while (thunder) {
		int x = rand() % row + 1;//ģ9��0~8,+1����1~9
		int y = rand() % col + 1;
		if (mineBoard[x][y] == '0') {
			mineBoard[x][y] = '1';
			thunder--;//����һ������һ��
		}
	}
}