// 7(основа+).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <iostream>
//using namespace std;
//void main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	char name[30], str[] = "!";
//	int n;
//	cout << "Введите строку " << endl;
//	cin >> name;
//	n = strlen(name);
//	for (int i = 0; name[i] != '\0'; i++)
//	{
//		if (name[i] == 'a')
//		{
//			for (int j = n + 1; j != i; j--)
//			{
//				name[j + 1] = name[j];
//			}
//			name[i + 1] = '!';
//		}
//	}
//	cout << "Строка после изменения :\n" << name << endl;
//}
//
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char name[30], str[] = "!";
	int n;
	char* p = name;
	cout << "Введите строку " << endl;
	cin >> name;
	n = strlen(name);
	for (int i = 0; *(p + i) != '\0'; i++)
	{
		if (*(p + i) == 'a')
		{
			for (int j = n + 1; j != i; j--)
			{
				*(p+j + (1)) = * (p +j);
			}
			* (p /*+ (i)*/+i+1) = '!';
		}
	}
	cout << "Строка после изменения :\n" << name << endl;
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
