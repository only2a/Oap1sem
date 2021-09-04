#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	double a, b, e = 0.0001, x1, x;

	cout << "Введите a:"; cin >> a; cout << "Введите b: "; cin >> b;


	((pow(a, 3) + sin(a)) * (3 * pow(a, 2) + cos(a))) > 0 ? x1 = a : x1 = b;

	do {
		x = x1;
		x1 = x - (pow(x, 3) + sin(x)) / (3 * pow(x, 2) + cos(x));
	} while (abs(x1 - x) > e);

	cout << "х1 = " << x1 << endl;
}