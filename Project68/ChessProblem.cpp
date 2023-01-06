#include<iostream>
using namespace std;
#define N 8

int row = 8;
int col = 8;

void printBoard(int board[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << board[i][j] << "  | ";
			cout << " ";
		}
		cout << endl;
	}
}

bool isValid(int board[N][N], int row, int col)
{
	int i, j, k, l;
	bool isTowerPresent;

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			board[i][j] = 0; //setam elementele sa fie 0, initial
	}

	cout << "---------------------------------------" << endl;

	printBoard(board);
	return false;
}


int main() {
	int board[N][N];
	cout << "O solutie este urmatoarea:" << endl;
	isValid(board, row, col);
}