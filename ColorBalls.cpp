#include "ColorBalls.h"
#include <iostream>
using namespace std;

void ColorBalls::colorBalls()
{
	char colorName[20];

	for (row = 0; row < MAX_ROW; row++)
	{
		for (col = 0; col < MAX_COL; col++)
		{
			matrix[row][col] = ' ';
			if (matrix[0][0] != 0 && matrix[0][6] != 0 && matrix[0][12] != 0 && matrix[4][0] != 0
				&& matrix[4][6] != 0 && matrix[4][12] != 0)
			{
				matrix[0][0] = ' ';
				matrix[0][1] = ' ';
				matrix[0][2] = ' ';
				matrix[0][3] = ' ';
				matrix[0][4] = ' ';
				matrix[0][5] = ' ';
				matrix[0][6] = ' ';
				matrix[0][7] = ' ';
				matrix[0][8] = ' ';
				matrix[0][9] = ' ';
				matrix[0][10] = ' ';
				matrix[0][11] = ' ';
				matrix[0][12] = ' ';
				matrix[1][0] = ' ';
				matrix[2][0] = ' ';
				matrix[3][0] = ' ';
				matrix[4][0] = ' ';
				matrix[4][1] = ' ';
				matrix[4][2] = ' ';
				matrix[4][3] = ' ';
				matrix[4][5] = ' ';
				matrix[4][6] = ' ';
				matrix[4][7] = ' ';
				matrix[4][8] = ' ';
				matrix[4][9] = ' ';
				matrix[4][10] = ' ';
				matrix[4][11] = ' ';
				matrix[1][12] = ' ';
				matrix[2][12] = ' ';
				matrix[3][12] = ' ';
				matrix[4][12] = ' ';
				matrix[1][2] = ' ';
				matrix[2][2] = ' ';
				matrix[3][2] = ' ';
				matrix[2][6] = ' ';
				matrix[2][9] = ' ';
				matrix[2][11] = ' ';
			}
			printf("%c", matrix[row][col]);
		}
		printf("\n");
	}
	for (row = 0; row < MAX_ROW; row++)
	{
		for (col = 0; col < MAX_COL; col++)
		{
			matrix[row][col] = ' ';
			if (matrix[0][0] != 0 && matrix[0][6] != 0 && matrix[0][12] != 0 && matrix[4][0] != 0
				&& matrix[4][6] != 0 && matrix[4][12] != 0)
			{
				matrix[0][0] = 'o';
				matrix[0][1] = '-';
				matrix[0][2] = '-';
				matrix[0][3] = '-';
				matrix[0][4] = '-';
				matrix[0][5] = '-';
				matrix[0][6] = '-';
				matrix[0][7] = '-';
				matrix[0][8] = '-';
				matrix[0][9] = '-';
				matrix[0][10] = '-';
				matrix[0][11] = '-';
				matrix[0][12] = '-';
				matrix[0][13] = '-';
				matrix[0][14] = '-';
				matrix[0][15] = '-';
				matrix[0][16] = '-';
				matrix[0][17] = '-';
				matrix[0][18] = '-';
				matrix[0][19] = '-';
				matrix[0][20] = '-';
				matrix[0][21] = '-';
				matrix[0][22] = '-';
				matrix[0][23] = '-';
				matrix[0][24] = '-';
				matrix[0][25] = '-';
				matrix[0][26] = '-';
				matrix[0][27] = '-';
				matrix[0][28] = '-';
				matrix[0][29] = '-';
				matrix[0][30] = '-';
				matrix[0][31] = '-';
				matrix[0][32] = '-';
				matrix[0][33] = '-';
				matrix[0][34] = '-';
				matrix[0][35] = '-';
				matrix[0][36] = 'o';
				matrix[0][37] = '-';
				matrix[0][38] = '-';
				matrix[0][39] = '-';
				matrix[0][40] = '-';
				matrix[0][41] = '-';
				matrix[0][42] = '-';
				matrix[0][43] = '-';
				matrix[0][44] = '-';
				matrix[0][45] = '-';
				matrix[0][46] = '-';
				matrix[0][47] = '-';
				matrix[0][48] = '-';
				matrix[0][49] = '-';
				matrix[0][50] = '-';
				matrix[0][51] = '-';
				matrix[0][52] = '-';
				matrix[0][53] = '-';
				matrix[0][54] = '-';
				matrix[0][55] = '-';
				matrix[0][56] = '-';
				matrix[0][57] = '-';
				matrix[0][58] = '-';
				matrix[0][58] = '-';
				matrix[0][59] = '-';
				matrix[0][60] = '-';
				matrix[0][61] = '-';
				matrix[0][62] = '-';
				matrix[0][63] = '-';
				matrix[0][64] = '-';
				matrix[0][65] = '-';
				matrix[0][66] = '-';
				matrix[0][67] = '-';
				matrix[0][68] = '-';
				matrix[0][69] = '-';
				matrix[0][70] = '-';
				matrix[0][71] = '-';
				matrix[0][72] = 'o';
				matrix[1][0] = '|';
				matrix[2][0] = '|';
				matrix[3][0] = '|';
				matrix[4][0] = '|';
				matrix[5][0] = '|';
				matrix[6][0] = '|';
				matrix[7][0] = '|';
				matrix[8][0] = '|';
				matrix[9][0] = '|';
				matrix[10][0] = '|';
				matrix[11][0] = '|';
				matrix[12][0] = 'o';
				matrix[12][1] = '-';
				matrix[12][2] = '-';
				matrix[12][3] = '-';
				matrix[12][4] = '-';
				matrix[12][5] = '-';
				matrix[12][6] = '-';
				matrix[12][7] = '-';
				matrix[12][8] = '-';
				matrix[12][9] = '-';
				matrix[12][10] = '-';
				matrix[12][11] = '-';
				matrix[12][12] = '-';
				matrix[12][13] = '-';
				matrix[12][14] = '-';
				matrix[12][15] = '-';
				matrix[12][16] = '-';
				matrix[12][17] = '-';
				matrix[12][18] = '-';
				matrix[12][19] = '-';
				matrix[12][20] = '-';
				matrix[12][21] = '-';
				matrix[12][22] = '-';
				matrix[12][23] = '-';
				matrix[12][24] = '-';
				matrix[12][25] = '-';
				matrix[12][26] = '-';
				matrix[12][27] = '-';
				matrix[12][28] = '-';
				matrix[12][29] = '-';
				matrix[12][30] = '-';
				matrix[12][31] = '-';
				matrix[12][32] = '-';
				matrix[12][33] = '-';
				matrix[12][34] = '-';
				matrix[12][35] = '-';
				matrix[12][36] = 'o';
				matrix[12][37] = '-';
				matrix[12][38] = '-';
				matrix[12][39] = '-';
				matrix[12][40] = '-';
				matrix[12][41] = '-';
				matrix[12][42] = '-';
				matrix[12][43] = '-';
				matrix[12][44] = '-';
				matrix[12][45] = '-';
				matrix[12][46] = '-';
				matrix[12][47] = '-';
				matrix[12][48] = '-';
				matrix[12][49] = '-';
				matrix[12][50] = '-';
				matrix[12][51] = '-';
				matrix[12][52] = '-';
				matrix[12][53] = '-';
				matrix[12][54] = '-';
				matrix[12][55] = '-';
				matrix[12][56] = '-';
				matrix[12][57] = '-';
				matrix[12][58] = '-';
				matrix[12][59] = '-';
				matrix[12][60] = '-';
				matrix[12][61] = '-';
				matrix[12][62] = '-';
				matrix[12][63] = '-';
				matrix[12][64] = '-';
				matrix[12][65] = '-';
				matrix[12][66] = '-';
				matrix[12][67] = '-';
				matrix[12][68] = '-';
				matrix[12][69] = '-';
				matrix[12][70] = '-';
				matrix[12][71] = '-';
				matrix[1][72] = '|';
				matrix[2][72] = '|';
				matrix[3][72] = '|';
				matrix[4][72] = '|';
				matrix[5][72] = '|';
				matrix[6][72] = '|';
				matrix[7][72] = '|';
				matrix[8][72] = '|';
				matrix[9][72] = '|';
				matrix[10][72] = '|';
				matrix[11][72] = '|';
				matrix[12][72] = 'o';
				matrix[3][9] = 'o';
				matrix[6][9] = 'o';
				matrix[9][9] = 'o';
				matrix[6][36] = 'o';
				matrix[6][58] = 'o';
				matrix[6][67] = 'o';
			}
			printf("%c", matrix[row][col]);
		}
		printf("\n");
	}

	cout << "You have to pot all color balls in the right order" << endl;
	cout << "Enter the first color" << endl;
	do
	{
		cin >> colorName;
		if (strcmp(colorName, "yellow") == 0)
		{
			cout << "Correct.The first color is a" << " " << colorName << " " << "ball" << endl;
			cout << "You are going to play for" << " " << colorName << " " << "pocket" << endl;
			cout << "The cue ball is located in exact positon and cannot be changed" << endl;
			for (row = 0; row < MAX_ROW; row++)
			{
				for (col = 0; col < MAX_COL; col++)
				{
					matrix[row][col] = ' ';
					if (matrix[0][0] != 0 && matrix[0][6] != 0 && matrix[0][12] != 0 && matrix[4][0] != 0
						&& matrix[4][6] != 0 && matrix[4][12] != 0)
					{
						matrix[0][0] = 'o';
						matrix[0][1] = '-';
						matrix[0][2] = '-';
						matrix[0][3] = '-';
						matrix[0][4] = '-';
						matrix[0][5] = '-';
						matrix[0][6] = '-';
						matrix[0][7] = '-';
						matrix[0][8] = '-';
						matrix[0][9] = '-';
						matrix[0][10] = '-';
						matrix[0][11] = '-';
						matrix[0][12] = '-';
						matrix[0][13] = '-';
						matrix[0][14] = '-';
						matrix[0][15] = '-';
						matrix[0][16] = '-';
						matrix[0][17] = '-';
						matrix[0][18] = '-';
						matrix[0][19] = '-';
						matrix[0][20] = '-';
						matrix[0][21] = '-';
						matrix[0][22] = '-';
						matrix[0][23] = '-';
						matrix[0][24] = '-';
						matrix[0][25] = '-';
						matrix[0][26] = '-';
						matrix[0][27] = '-';
						matrix[0][28] = '-';
						matrix[0][29] = '-';
						matrix[0][30] = '-';
						matrix[0][31] = '-';
						matrix[0][32] = '-';
						matrix[0][33] = '-';
						matrix[0][34] = '-';
						matrix[0][35] = '-';
						matrix[0][36] = 'o';
						matrix[0][37] = '-';
						matrix[0][38] = '-';
						matrix[0][39] = '-';
						matrix[0][40] = '-';
						matrix[0][41] = '-';
						matrix[0][42] = '-';
						matrix[0][43] = '-';
						matrix[0][44] = '-';
						matrix[0][45] = '-';
						matrix[0][46] = '-';
						matrix[0][47] = '-';
						matrix[0][48] = '-';
						matrix[0][49] = '-';
						matrix[0][50] = '-';
						matrix[0][51] = '-';
						matrix[0][52] = '-';
						matrix[0][53] = '-';
						matrix[0][54] = '-';
						matrix[0][55] = '-';
						matrix[0][56] = '-';
						matrix[0][57] = '-';
						matrix[0][58] = '-';
						matrix[0][58] = '-';
						matrix[0][59] = '-';
						matrix[0][60] = '-';
						matrix[0][61] = '-';
						matrix[0][62] = '-';
						matrix[0][63] = '-';
						matrix[0][64] = '-';
						matrix[0][65] = '-';
						matrix[0][66] = '-';
						matrix[0][67] = '-';
						matrix[0][68] = '-';
						matrix[0][69] = '-';
						matrix[0][70] = '-';
						matrix[0][71] = '-';
						matrix[0][72] = 'o';
						matrix[1][0] = '|';
						matrix[2][0] = '|';
						matrix[3][0] = '|';
						matrix[4][0] = '|';
						matrix[5][0] = '|';
						matrix[6][0] = '|';
						matrix[7][0] = '|';
						matrix[8][0] = '|';
						matrix[9][0] = '|';
						matrix[10][0] = '|';
						matrix[11][0] = '|';
						matrix[12][0] = 'o';
						matrix[12][1] = '-';
						matrix[12][2] = '-';
						matrix[12][3] = '-';
						matrix[12][4] = '-';
						matrix[12][5] = '-';
						matrix[12][6] = '-';
						matrix[12][7] = '-';
						matrix[12][8] = '-';
						matrix[12][9] = '-';
						matrix[12][10] = '-';
						matrix[12][11] = '-';
						matrix[12][12] = '-';
						matrix[12][13] = '-';
						matrix[12][14] = '-';
						matrix[12][15] = '-';
						matrix[12][16] = '-';
						matrix[12][17] = '-';
						matrix[12][18] = '-';
						matrix[12][19] = '-';
						matrix[12][20] = '-';
						matrix[12][21] = '-';
						matrix[12][22] = '-';
						matrix[12][23] = '-';
						matrix[12][24] = '-';
						matrix[12][25] = '-';
						matrix[12][26] = '-';
						matrix[12][27] = '-';
						matrix[12][28] = '-';
						matrix[12][29] = '-';
						matrix[12][30] = '-';
						matrix[12][31] = '-';
						matrix[12][32] = '-';
						matrix[12][33] = '-';
						matrix[12][34] = '-';
						matrix[12][35] = '-';
						matrix[12][36] = 'o';
						matrix[12][37] = '-';
						matrix[12][38] = '-';
						matrix[12][39] = '-';
						matrix[12][40] = '-';
						matrix[12][41] = '-';
						matrix[12][42] = '-';
						matrix[12][43] = '-';
						matrix[12][44] = '-';
						matrix[12][45] = '-';
						matrix[12][46] = '-';
						matrix[12][47] = '-';
						matrix[12][48] = '-';
						matrix[12][49] = '-';
						matrix[12][50] = '-';
						matrix[12][51] = '-';
						matrix[12][52] = '-';
						matrix[12][53] = '-';
						matrix[12][54] = '-';
						matrix[12][55] = '-';
						matrix[12][56] = '-';
						matrix[12][57] = '-';
						matrix[12][58] = '-';
						matrix[12][59] = '-';
						matrix[12][60] = '-';
						matrix[12][61] = '-';
						matrix[12][62] = '-';
						matrix[12][63] = '-';
						matrix[12][64] = '-';
						matrix[12][65] = '-';
						matrix[12][66] = '-';
						matrix[12][67] = '-';
						matrix[12][68] = '-';
						matrix[12][69] = '-';
						matrix[12][70] = '-';
						matrix[12][71] = '-';
						matrix[1][72] = '|';
						matrix[2][72] = '|';
						matrix[3][72] = '|';
						matrix[4][72] = '|';
						matrix[5][72] = '|';
						matrix[6][72] = '|';
						matrix[7][72] = '|';
						matrix[8][72] = '|';
						matrix[9][72] = '|';
						matrix[10][72] = '|';
						matrix[11][72] = '|';
						matrix[12][72] = 'o';
						matrix[3][9] = 'o';
						matrix[6][9] = 'o';
						matrix[9][9] = 'o';
						matrix[6][36] = 'o';
						matrix[6][58] = 'o';
						matrix[6][67] = 'o';
						matrix[6][18] = '0';
					}
					printf("%c", matrix[row][col]);
				}
				printf("\n");
			}
			cout << "Enter how many parts of the" << " " << colorName << "ball will be hit" << endl;
			float yellowParts;
			do
			{
				cin >> yellowParts;
				if (yellowParts == 0.25 || yellowParts == 0.5 || yellowParts == 0.75 || yellowParts == 1)
				{
					break;
				}
				else
				{
					cout << "Invalid parts" << endl;
					cout << "Please try again" << endl;
				}
			} while (yellowParts != 0.25 || yellowParts != 0.5 || yellowParts != 0.75 || yellowParts != 1);
			break;
		}
		else
		{
			cout << "The first color ball is not" << " " << colorName << endl;
			cout << "Please try again" << endl;
		}
	} while (colorName != "yellow");
	cout << "Enter the second color" << endl;
	do
	{
		cin >> colorName;
		if (strcmp(colorName, "green") == 0)
		{
			cout << "Correct.The second color ball is" << " " << colorName << endl;
		}
	} while (for the first do for green ball)

}