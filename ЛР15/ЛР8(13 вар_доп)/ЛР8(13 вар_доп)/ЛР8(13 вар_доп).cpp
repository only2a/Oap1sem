// ЛР8(13 вар_доп).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
double f(double x)
{
	return pow(x, 3) + 2*x - 7;
}
double fs(double x)
{
	return 3 * pow(x, 2) + 2;
}
double fs2(double x)
{
	return 6 * x;
}
double dichotomyMethod(double(*g) (double), double a, double b, double e)
{
	while (fabs(a - b) > 2.0 * e)
	{
		double x = (a + b) / 2.0;
		if (g(x) * g(a) <= 0)
			b = x;
		else
			a = x;
	}
	return (a + b) / 2.0;
}
double kastMethod(double(*g) (double), double(*gs) (double), double(*gs2) (double), double a, double b, double e)
{
	double x, x1;
	if (f(a) * fs2(a) > 0)
		x1 = a;
	else
		x1 = b;
	x = x1;
	do
	{
		x = x1;
		x1 = x - (g(x) / fs(x));
	} while (fabs(x1 - x) > e);
	return x1;
}
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, e;
	cout << "Введите левую границу интервала (a) "; cin >> a;
	cout << "Введите правую границу интервала (b) "; cin >> b;
	cout << "Введите точность решения (e) "; cin >> e;
	cout << "Корень решения методом дихотомии:" << dichotomyMethod(&f, a, b, e) << endl;
	cout << "Корень решения методом касательных:" << kastMethod(&f, &fs, &fs2, a, b, e) << endl;
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
