#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



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
void LayThunder(char mineBoard[ROWS][COLS], int row, int col) {
	int thunder = THUNDER;//雷的数量
	while (thunder) {
		int x = rand() % row + 1;//模9余0~8,+1就是1~9
		int y = rand() % col + 1;
		if (mineBoard[x][y] == '0') {
			mineBoard[x][y] = '1';
			thunder--;//布置一个雷 少一个
		}
	}
}

//统计雷周围的数量
static int getThunderCount(char mineBoard[ROWS][COLS],int x,int y) {
	//1.循环排查
	int count = 0;
	for (int i = -1; i <= 1;i++) {
		for (int j = -1; j <= 1;j++) {
			count += (mineBoard[x + i][y + j]) - '0';
		}
	}
	return count;
	//2.死排查
	//return mineBoard[x - 1][y - 1] +
	//	mineBoard[x][y - 1] +
	//	mineBoard[x + 1][y - 1] +
	//	mineBoard[x + 1][y] +
	//	mineBoard[x + 1][y + 1] +
	//	mineBoard[x][y + 1] +
	//	mineBoard[x + 1][y + 1] +
	//	mineBoard[x - 1][y] - 8 * '0';
}

//排查雷
/*
* mineBoard:布置雷的盘
* showBoard:展示的盘
* row:行
* col:列
*/
void FindThunder(char mineBoard[ROWS][COLS], char showBoard[ROWS][COLS], int row, int col) {
	//1.输入排查的坐标
	//2.检查坐标是不是雷
		//(1).是雷 - 提示 - 游戏结束
		//(2).不是雷 - 统计周围雷的数量 - 游戏继续
	int x = 0, y = 0;
	int win = 0;//排查完所有雷的标志
	while (win < row * col - THUNDER) {
		printf("请输入坐标(空格隔开):");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9) {
			if (mineBoard[x][y] == '1') {
				printf("抱歉，游戏失败，您被炸死了\n");
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
			printf("坐标不合法，请重新你输入\n");
		}
	}
	if (win) {
		printf("恭喜您排完了所有雷！\n");
		DisplayBoard(mineBoard, row, col);
	}
}
