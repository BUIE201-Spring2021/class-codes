#include <iostream>
#include <vector>

using namespace std;

//#define ARRAY_SIZE_MACRO 10

int main()
{
	const int ARRAY_SIZE = 10;
	int StackArray[ARRAY_SIZE];

	int nIntegers;
	cout << "Please enter number of items: " << endl;
	cin >> nIntegers;

	// The following does not work since nIntegers is not a const.
	// int Array[nIntegers];

	int* HeapArray = new int[nIntegers];
	for (int i = 0; i < nIntegers; ++i)
	{
		cout << "Please enter item at index " << i << ": " << endl;
		cin >> HeapArray[i];
	}

	int Total = 0;
	for (int i = 0; i < nIntegers; ++i)
		Total += HeapArray[i];
	cout << "Total = " << Total << endl;

	vector<int> VectorArray;
	VectorArray.resize(nIntegers);
	for (int i = 0; i < nIntegers; ++i)
		VectorArray[i] = HeapArray[i];

	delete[] HeapArray;
	HeapArray = nullptr;

	// Matrices
	const int ROWS = 3;
	const int COLUMNS = 2;
	int StackMatrix[ROWS][COLUMNS];

	for (int i = 0; i < ROWS; ++i)
		for (int j = 0; j < COLUMNS; ++j)
		{
			StackMatrix[i][j] = i + j;
		}

	// Print the matrix
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << StackMatrix[i][j] << " ";
		}
		cout << endl;
	}

	int nRows;
	int nColumns;
	cout << "Please enter number of rows: " << endl;
	cin >> nRows;
	cout << "Please enter number of columns: " << endl;
	cin >> nColumns;

	vector<vector<int>> Vector2D;
	Vector2D.resize(nRows);
	for (int i = 0; i < nRows; ++i)
		Vector2D[i].resize(nColumns);

	for (int i = 0; i < nRows; ++i)
		for (int j = 0; j < nColumns; ++j)
		{
			Vector2D[i][j] = i + j;
		}

	// Print the matrix
	for (int i = 0; i < nRows; ++i)
	{
		for (int j = 0; j < nColumns; ++j)
		{
			cout << Vector2D[i][j] << " ";
		}
		cout << endl;
	}

	int** HeapArray2D = new int*[nRows];
	for (int i = 0; i < nRows; ++i)
		HeapArray2D[i] = new int[nColumns];

	for (int i = 0; i < nRows; ++i)
		for (int j = 0; j < nColumns; ++j)
		{
			HeapArray2D[i][j] = i + j;
		}

	// Print the matrix
	for (int i = 0; i < nRows; ++i)
	{
		for (int j = 0; j < nColumns; ++j)
		{
			cout << HeapArray2D[i][j] << " ";
		}
		cout << endl;
	}

	// cleanup columns
	for (int i = 0; i < nRows; ++i)
	{
		delete[] HeapArray2D[i];
		HeapArray2D[i] = nullptr;
	}
	// cleanup rows
	delete[] HeapArray2D;
	HeapArray2D = nullptr;
}
