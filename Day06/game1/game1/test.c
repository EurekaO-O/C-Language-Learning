#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu() {
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|   * * * * * * * * * * * * * 1.Play * * * * * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * * * 2.Play * * * * * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * * * 0.Exit * * * * * * * * * * * * *   |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}
void game() {
	//存储数据
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);
	//获取游戏状态
	char result;
	//玩家/电脑下棋
	while (1) {
		PlayerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;

		ComputerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;
	}

	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
	printf("| - - - - - - - - - - - - ↓游戏最终结果↓ - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("玩家获胜！\n");
	}
	else if (result == 'F') {
		printf("电脑获胜！\n");
	}
	else printf("平局！\n");
}
void main() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("请选择:");
		scanf("%d",&input);
		switch (input) {
		case 0:
			printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
			printf("|- - - - - - - - - - - - - 退出游戏成功! - - - - - - - - - - - - |\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}