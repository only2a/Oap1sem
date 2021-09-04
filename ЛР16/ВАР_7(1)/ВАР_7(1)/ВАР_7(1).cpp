#include <iostream>
using namespace std;
int findMin(int** A, int row, int col)
{
	for (int j = 0; j < col; j++)
	{
		int negativeNum = 0;
		for (int i = 0; i < row; i++)
		{
			if (*(*(A + i) + j) < 0)
				negativeNum = negativeNum + 1;
		}
		if (negativeNum == row)
			return j;
	}
	return -1;
}
int getAverage(int** A, int row, int nn)
{
	int sum = 0;
	for (int i = 0; i < row; i++)
		sum = sum + *(*(A + i) + nn);
	return sum / row;
}
void deduct(int** A, int row, int col, int* nc)
{
	for (int j = 0; j < col; j++)
		for (int i = 0; i < row; i++)
			*(*(A + i) + j) = *(*(A + i) + j) /2;
}
void main()
{
	setlocale(LC_CTYPE, "Rus");
	int** A, row, col, i, j;
	cout << "Введите число строк матрицы "; cin >> row;
	cout << "Введите чиcло столбцов "; cin >> col;
	A = new int* [row];
	for (int i = 0; i < row; i++)
		A[i] = new int[col];
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
		{
			cout << "Введите A[" << i << "],[" << j << "]= ";
			cin >> *(*(A + i) + j);
		}
	cout << "Матрица до изменения:" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
			cout << "A[" << i << "," << j << "] =" << *(*(A + i) + j) << "\t";
	}
	cout << endl;
	int negCol = findMin(A, row, col);
	if (negCol >= 0)
	{
		cout << "Индекс отрицательного столбца: " << negCol << endl;
		int average = getAverage(A, row, negCol);
		cout << "Среднее арифметическое: " << average << endl;
		deduct(A, row, col, &average);
	}
	cout << "Результирующая матрица:" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << endl;
		for (int j = 0; j < col; j++)
			cout << "A[" << i << "," << j << "] =" << *(*(A + i) + j) << "\t";
	}
	for (int k = 0; k < row; k++)
		delete A[k];
	delete[] A;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
