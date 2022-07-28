#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Menu() {
	printf("|= = = = = = = = = = = = = ��ӭ���澮����! = = = = = = = = = = = |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|   * * * * * * * * * * * 1.Player Vs Computer * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 2.Player Vs Player * * * * * * * * *   |\n");
	printf("|   * * * * * * * * * * * 0.Exit(�˳���Ϸ)  * * * * * * * * *    |\n");
	printf("|* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * |\n");
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - |\n");
}
void PlayerVsComputer() {
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
		PlayerOneChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;

		ComputerChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		result = IsWin(board, ROW, COL);
		if (result != 'C') break;
	}
	system("cls");//����
	printf("|- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -|\n");
	printf("| - - - - - - - - - - - - ����Ϸ���ս���� - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("��һ�ʤ��\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'F') {
		printf("���Ի�ʤ��\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else {
		printf("ƽ�֣�\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
}
void PlayerVsPlayer() {
	//�洢����
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board, ROW, COL);
	//��ȡ��Ϸ״̬
	char result;
	//1p/2p��Ҷ�ս
	while (1) {
		PlayerOneChess(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
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
	printf("| - - - - - - - - - - - - ����Ϸ���ս���� - - - - - - - - - - - -|\n");
	DisplayBoard(board, ROW, COL);
	if (result == 'T') {
		printf("��� 1 ��ʤ��\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'R') {
		printf("���Ի�ʤ��\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else if (result == 'F') {
		printf("��� 2 ��ʤ��\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
	else {
		printf("ƽ�֣�\n");
		printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	}
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
			printf("|- - - - - - - - - - - �˳���Ϸ�ɹ�����л����! - - - - - - - - - |\n");
			break;
		case 1:
			PlayerVsComputer();
			break;
		case 2:
			PlayerVsPlayer();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}