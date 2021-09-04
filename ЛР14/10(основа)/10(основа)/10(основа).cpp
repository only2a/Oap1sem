// 10(основа).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

# include <iostream>
#define p 4
using namespace std;
void massiv();
void matrix();
int main(void)

{

	setlocale(LC_CTYPE, "Russian");

	int c;

	do

	{

		cout << endl;

		cout << "Введите" << endl;

		cout << "1-одномерный массив" << endl;

		cout << "2-работа с матрицей" << endl;

		cout << "3-выход" << endl;

		cin >> c;

		switch (c)

		{

		case 1: massiv(); break;

		case 2: matrix(); break;

		case 3: break;

		}

	} while (c != 3);

}

void massiv()

{

	int size = 0, i, n,k,max,min;

	float* M, sum=0, mn;

	cout << "Введите размер массива ";

	cin >> size;

	M = new float[size];

	for (i = 0; i < size; i++)

	{

		cout << "Введите " << i + 1 << " элемент ";

		cin >> *(M + i);

		sum += *(M + i);

	}
	max = *M; min =*M;

	

	mn = 1;

	for (i = 0; i < size; i++) {

		if (abs(*(M + i)) > max)
		{
			max = *(M + i);
			n = i;
		}
	}
	for (i = 0; i < size; i++) {
		if (abs(*(M + i)) < min)
		{
			min = *(M + i);
			k = i;
		}
	}
	if (n > k)
	{
		int t = k;
		k = n;
		n = k;
	}
	   
	cout << "Максимальный элемент массива= " << max << endl;
	cout << "Mинимальный элемент массива=" << min << endl;
	sum = 0;
	mn = 1;
	for (i=n+1; i < k; i++)
	{
		sum = sum + M[i];
		mn = mn * M[i];
	}
	cout << "Сумма= " << sum << endl;
	cout << "Произведение=" << mn << endl;
	cout << endl;

	delete[] M;


}






void matrix()

{

	int** A, row, col, i, j, m;

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
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout/*<<" "*/ << A[i][j] << " ";
		}
		cout << endl;
	}
	
	int C = 0;

	for (i = 0; i < row; i++) {

		int D = -1;

		for (j = 0; j < col; j++)

			if (*(*(A + i) + j) < 0)

			{

				D = i;

			}
		if (D >= 0) { D = C; break; }


	}

	cout << " первая строка,содержащая только отрицатеьные элементы: " << C << endl;
	
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			A[i][j] += A[C][0];
	cout << "Матрица после изменения:" << endl;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			cout/*<<" "*/ << A[i][j] << " ";
		}
		cout << endl;
	}

	

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
