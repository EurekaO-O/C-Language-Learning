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
	//�洢����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ʾ����
	DisplayBoard(board, ROW, COL);
	//��ȡ��Ϸ״̬
	char result;
	//���/��������
	while (1) {
		PlayerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;

		ComputerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;
	}

	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
	printf("| - - - - - - - - - - - - ����Ϸ���ս���� - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("��һ�ʤ��\n");
	}
	else if (result == 'F') {
		printf("���Ի�ʤ��\n");
	}
	else printf("ƽ�֣�\n");
}
void main() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("��ѡ��:");
		scanf("%d",&input);
		switch (input) {
		case 0:
			printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
			printf("|- - - - - - - - - - - - - �˳���Ϸ�ɹ�! - - - - - - - - - - - - |\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}