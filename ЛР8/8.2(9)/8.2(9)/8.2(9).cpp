﻿// 8.2(9).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 3, b = 6, n = 200, x, h, s1 = 0, s2 = 0, i = 1, z = 0;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n)
	{
		s2 += pow(x, 3) +3;
		x += h;
		s1 += pow(x, 3) +3;
		x += h;
		i++;
	}

	z = h / 3 * (pow(a, 3) +3 + 4 * (pow(a + h, 3) +3) + 4 * s1 + 2 * s2 + pow(b, 3) + 3);
	cout << "z = " << z << endl;
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
