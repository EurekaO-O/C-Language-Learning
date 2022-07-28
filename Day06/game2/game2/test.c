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

}
void main() {
	int input = 0;
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
