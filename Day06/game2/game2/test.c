#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Menu() {
	printf("|= = = = = = = = = = = = = ��ӭ����ɨ��! = = = = = = = = = = = = |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|   * * * * * * * * * * * 1.Play           * * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 0.Exit(�˳���Ϸ) * * * * * * * * * *   |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}
void MineSweeper() {

}
void main() {
	int input = 0;
	do {
		Menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			MineSweeper();
			break;
		case 0:
			system("cls");
			printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
			printf("|- - - - - - - - - - �˳���Ϸ�ɹ�����л��������! - - - - - - - - |\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
