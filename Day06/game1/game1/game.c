#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col;j++) {
			board[i][j] = ' ';
		}
	}
}

//显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col;j++) {
			printf(" %c ", board[i][j]);
			if (j < col-1) {
				printf("|");
			}
		}
		putchar('\n');
		if (i < row-1) {
			for (int i = 0; i < col;i++) {
				printf("---");
				if (i < col - 1) {
					printf("|");
				}
			}
			putchar('\n');
		}
		
	}
}

//玩家1下棋
void PlayerOneChess(char board[ROW][COL], int row, int col) {
	int x, y;
	while (1) {
		printf("玩家 1 开始下棋(请输入坐标,空格隔开,T是您的棋子)->:");
		int result = scanf("%d %d", &x, &y);
		//判断用户输入坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//判断是否被占用
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'T';
				break;
			}
			else printf("当前位置已经被占用了，请重新输入\n");
		}
		else {
			printf("坐标非法，请重新输入\n");
		}
	}
}

//玩家2下棋
void PlayerTwoChess(char board[ROW][COL], int row, int col) {
	int x, y;
	while (1) {
		printf("玩家 2 开始下棋(请输入坐标,空格隔开,F是您的棋子)->:");
		int result = scanf("%d %d", &x, &y);
		//判断用户输入坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//判断是否被占用
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'F';
				break;
			}
			else printf("当前位置已经被占用了，请重新输入\n");
		}
		else {
			printf("坐标非法，请重新输入\n");
		}
	}
}

//电脑下棋
void ComputerChess(char board[ROW][COL], int row, int col) {
	printf("电脑开始下棋(电脑的棋子是F)->:\n");
	while (1) {
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'F';
			break;
		}
	}
}
/*
* 1.玩家赢 - T
* 2.电脑赢 - F
* 3.平局   - D
* 4.继续   - C
*/
//三行 三列 对角线
char IsWin(char board[ROW][COL], int row, int col) {
	//三行
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
			return board[i][1];
		}
	}

	//三列
	for (int i = 0; i < row; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
			return board[1][i];
		}
	}

	//对角线
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') || 
		(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')) {
		return board[1][1];
	}

	//判断平局
	int result = IsDraw(board,row,col);
		if (result == 1) {
			return 'D';
		}
	return 'C';
}

int IsDraw(char board[ROW][COL], int row, int col) {
	for (int i = 0; i <= row; i++) {
		for (int j = 0; j <= col; j++) {
			//棋盘没慢还有空格
			if (board[i][j] == ' ') {
				return 0;//棋盘没满
			}
		}
	}
	return 1;//棋盘满了
}