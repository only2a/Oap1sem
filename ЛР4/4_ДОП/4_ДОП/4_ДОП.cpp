// 4_ДОП.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
using namespace std;
int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, p, q, r, s;
    cout << "Введите ширину и длину учатка "; cin >> a >> b;
    cout << "Введите ширину и длину dom1 "; cin >> p>> q;
    cout << "Введите ширину и длину dom2 "; cin >> r >> s;
      if ( (a >= p && a >= r && b >= (q + s)) || // Дома стоят вдоль b (4 варианта)
        (a >= q && a >= r && b >= (p + s)) ||
        (a >= p && a >= s && b >= (q + r)) ||
        (a >= q && a >= s && b >= (p + r)) ||
        (b >= p && b >= r && a >= (q + s)) || // Дома стоят вдоль a (4 варианта)
        (b >= q && b >= r && a >= (p + s)) ||
        (b >= p && b >= s && a >= (q + r)) ||
         (b >= q && b >= s && a >= (p + r))) {
          cout << "Дома можно разместить на участке";
      }
      else { cout << "Дома нельзя разместить на участке"; }
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
