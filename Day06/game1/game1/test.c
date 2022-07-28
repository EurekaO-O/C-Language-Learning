#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu() {
	printf("|= = = = = = = = = = = = = 欢迎游玩井字棋! = = = = = = = = = = = |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|   * * * * * * * * * * * 1.Player Vs Computer * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 2.Player Vs Player * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 0.Exit(退出游戏)  * * * * * * * * *    |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}
void PlayerVsComputer() {
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
		PlayerOneChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;

		ComputerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;
	}
	system("cls");//清屏
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
	printf("| - - - - - - - - - - - - ↓游戏最终结果↓ - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("玩家获胜！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'F') {
		printf("电脑获胜！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else {
		printf("平局！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
}
void PlayerVsPlayer() {
	//存储数据
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board, ROW, COL);
	//获取游戏状态
	char result;
	//1p/2p玩家对战
	while (1) {
		PlayerOneChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;

		PlayerTwoChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C') {
			break;
		}
	}
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
	printf("| - - - - - - - - - - - - ↓游戏最终结果↓ - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("玩家 1 获胜！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'R') {
		printf("电脑获胜！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'F') {
		printf("玩家 2 获胜！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else {
		printf("平局！\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
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
			printf("|- - - - - - - - - - - 退出游戏成功，感谢游玩! - - - - - - - - - |\n");
			break;
		case 1:
			PlayerVsComputer();
			break;
		case 2:
			PlayerVsPlayer();
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}