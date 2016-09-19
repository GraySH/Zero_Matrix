//============================================================================
// Name        : Zero_Matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

const int SIZE = 3;

void zeroRow(int matrix[][SIZE], int row)
{
	for(int i = 0; i < SIZE; i++)
	{
		matrix[row][i] = 0;
	}
}

void zeroCol(int matrix[][SIZE], int col)
{
	for(int i = 0; i < SIZE; i++)
	{
		matrix[i][col] = 0;
	}
}

void zeroMatrix(int matrix[][SIZE])
{

	//keep track of zero matrix.
	int rowZero[SIZE] = {0};
	int colZero[SIZE] = {0};


	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			if( matrix[i][j] == 0 )
			{
				rowZero[i] = 1;
				colZero[j] = 1;
			}
		}
	}

	for( int i = 0; i < SIZE; i++)
	{
		if ( rowZero[i] == 1 )
		{
			zeroRow(matrix, i);
		}

		if ( colZero[i] == 1 )
		{
			zeroCol(matrix, i);
		}
	}
}


int main()
{
	int matrix[SIZE][SIZE] =
	{
			{1,0,3},
			{4,5,6},
			{7,8,9}
	};

	zeroMatrix(matrix);


	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
