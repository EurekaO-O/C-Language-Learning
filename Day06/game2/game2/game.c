#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int thunder = 10;//雷的数量

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows;i++) {
		for (int j = 0; j < cols;j++) {
			board[i][j] = set;
		}
	}
}

//输出棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	printf("|- - - - - - - - - - - - - - 扫雷游戏  - - - - - - - - - - - - - |\n");
	//打印列号
	for (int i = 0; i <= col;i++) printf("%d ", i);
	putchar('\n');
	for (int i = 1; i <= row;i++) {
		//打印行号
		printf("%d ",i);
		for (int j = 1; j <= col;j++) {
			printf("%c ",board[i][j]);
		}
		putchar('\n');
	}
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}

//布置雷
/*
* mineBoard:布置雷的盘
* ROW:行 COL:列
* thunder:雷的数量
*/
void LayThunder(char mineBoard[ROWS][COLS], int row, int col, int thunder) {
	while (thunder) {
		int x = rand() % row + 1;//模9余0~8,+1就是1~9
		int y = rand() % col + 1;
		if (mineBoard[x][y] == '0') {
			mineBoard[x][y] = '1';
			thunder--;//布置一个雷少一个
		}
	}
}