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
	char mineBoard[ROWS][COLS] = { 0 };//��Ų����׵���Ϣ
	char showBoard[ROWS][COLS] = { 0 };//����Ų��׵���Ϣ
	//��ʼ������
	InitBoard(mineBoard,ROWS,COLS,'0');
	InitBoard(showBoard,ROWS,COLS,'*');
	//�������(��Ϊֻ��Ҫ��ʾ9*9����������ʹ��ROW COL)
	
	DisplayBoard(showBoard,ROW,COL);

	//������
	LayThunder(mineBoard,ROW,COL);
	DisplayBoard(mineBoard, ROW, COL);

	//�Ų���
	FindThunder(mineBoard,showBoard,ROW,COL);
}
void main() {
	int input = 0;
	srand((unsigned int)time(NULL));
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
