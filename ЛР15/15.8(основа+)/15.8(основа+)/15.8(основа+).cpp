// x^3+x-4
//

#include <iostream>
using namespace std;
char* getSimilar(char* a, char* b)
{
	int c = 0;
	int l1 = strlen(a);
	int l2 = strlen(b);
	int max = l1;
	int min = l2;
	if (l2 > max)
		max = l2;
	min = l1;
	for (int i = 0; i <= min; i++)
	{
		for (int j = 0; j <= max; j++)
		{
			if (a[i] == b[j])
				c = c + 2;
		}
	}
	char* result = new char[c + 2];
	c = 0;
	for (int i = 0; i <= min; i++)
	{
		for (int j = 0; j <= max; j++)
		{
			if (a[i] == b[j])
			{
				result[c] = a[i];
				result[c + 1] = ' ';
				c = c + 2;
			}
		}
	}
	result[c] = 0;
	return result;
}
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char* s1 = new char[256];
	char* s2 = new char[256];
	cout << "Введите первую первую строку "; cin >> s1;
	cout << "Введите вторую строку "; cin >> s2;
	char* r = getSimilar(s1, s2);
	cout << "Совпадающие символы двух строк: " << r << endl;
	delete[]r;
}

