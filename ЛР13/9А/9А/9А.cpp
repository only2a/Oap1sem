﻿// 9А.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void main()

{

	setlocale(LC_CTYPE, "Russian");

	using namespace std;

	int n, i, j, B[100][100]; double Y[100];

	cout << "Введите размер матрицы "; cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)

		{

			cout << "Введите B[" << i << "],[" << j << "]= ";

			cin >> B[i][j];

		}
	}
	cout << "Матрица :" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout/*<<" "*/ << B[i][j] << " ";
		}
		cout << endl;
	}

	int max = B[0][0];

	for (int i = 0; i < n; i++)

	{

		if (max < B[i][i])

			max = B[i][i];

		Y[i] = B[i][i];

	}
	cout << "Массив Y до изменения :" << endl;
	for (int i = 0; i < n; i++)
		cout << Y[i] << " ";
	cout << endl;

	for (int i = 0; i < n; i++)

		Y[i] = Y[i] / max;

	cout << "Максималный элемент: " << max << endl;

	cout << "Массив Y после изменения:" << endl;

	for (int i = 0; i < n; i++)

	{

		cout << "Y[" << i << "] = " << Y[i] << " ";

	}

}

#include <iostream>

void main()

{

	setlocale(LC_CTYPE, "Russian");

	using namespace std;

	int n, i, j, B[100][100]; double Y[100];

	cout << "Введите размер матрицы "; cin >> n;

	

	

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)

		{

			cout << "Введите B[" << i << "],[" << j << "]= ";

			cin >> *(*(B + i) + j);

		}
	}
	cout << "Матрица :" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout/*<<" "*/ << B[i][j] << " ";
		}
		cout << endl;
	}
	int max = B[0][0];

	for (int i = 0; i < n; i++)

	{

		if (max < *(*(B + i) + i))

			max = *(*(B + i) + i);

		*(Y + i) = *(*(B + i) + i);
		
	}
	cout << "Массив Y до изменения :" << endl;
	for (int i = 0; i < n; i++)
		cout << *(Y + i) << " ";
	cout << endl;
	for (int i = 0; i < n; i++)

		*(Y + i) = *(Y + i) / max;

	cout << "Максималный элемент: " << max << endl;

	cout << "Массив Y после изменения:" << endl;

	for (int i = 0; i < n; i++)

	{

		cout << "Y[" << i << "] = " << *(Y + i) << " ";

	}

	
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
