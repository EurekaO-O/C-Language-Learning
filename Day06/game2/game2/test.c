#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu() {
	printf("|= = = = = = = = = = = = = 欢迎游玩扫雷! = = = = = = = = = = = = |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|   * * * * * * * * * * * 1.Play           * * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 0.Exit(退出游戏) * * * * * * * * * *   |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}
void MineSweeper() {
	char mineBoard[ROWS][COLS] = { 0 };//存放布置雷的信息
	char showBoard[ROWS][COLS] = { 0 };//存放排查雷的信息
	//初始化棋盘
	InitBoard(mineBoard,ROWS,COLS,'0');
	InitBoard(showBoard,ROWS,COLS,'*');
	//输出棋盘(因为只需要显示9*9的内容所以使用ROW COL)
	
	DisplayBoard(showBoard,ROW,COL);

	//布置雷
	LayThunder(mineBoard,ROW,COL);
	DisplayBoard(mineBoard, ROW, COL);

	//排查雷
	FindThunder(mineBoard,showBoard,ROW,COL);
}
void main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			MineSweeper();
			break;
		case 0:
			system("cls");
			printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
			printf("|- - - - - - - - - - 退出游戏成功，感谢您的游玩! - - - - - - - - |\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
