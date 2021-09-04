// 16(доп).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

# include <iostream>
#include<ctime>
using namespace std;
void massiv();
void matrix();

int main(void)
{
    setlocale(LC_CTYPE, "Russian");
    srand(time(NULL));
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
    cout << " " << endl;
    int  size = 20, f = 0, n = 0, m = 0, k = 0;
    int* mass = new int[size];
    for (int i = 0; i < size; i++)
    {
        mass[i] = rand() % 100 - 50;
        cout << mass[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (mass[i] > 0)
        {
            n = mass[i];
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (mass[i] > 0)
        {
            m = mass[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (mass[i] < k)
        {
            k = mass[i];
        }

    }
    for (int i = 0; i < size; i++)
    {
        if (mass[i] != n or mass[i] != m)
        {
            f = f + mass[i];
        }
    }
    cout << "самый маленький элемент " << k << endl;
    cout << "сумма между " << n << " и " << m << " положительным элементами" << ":" << f << endl;
    delete[] mass;
    mass = nullptr;
}
void matrix()
{
    int rows = 3, cols = 3, n = -1, k = 0;
    int** mass = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        mass[i] = new int[cols];
    }
    cout << "1 матрица" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Введите A[" << i << "],[" << j << "]= ";
            cin >> *(*(mass + i) + j);

        }
        cout << endl;
    }
    cout << "Матрица :" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout/*<<" "*/ << mass[i][j] << " ";

        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mass[i][j] < 0)
            {
                n = i;
                break;
            }
        }
        if (n != -1)
        {
            break;
        }
    }
    cout << "Строка содержащая отрицательный элемент: " << n << endl;
    cout << "2 матрица" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == n)
            {
                mass[i][j] = mass[i][j] / 2;
            }
            cout << mass[i][j] << " ";
            if (j == cols - 1)
            {
                cout << " " << endl;
            }
        }
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] mass[i];
        mass[i] = nullptr;
    }
    delete[] mass;
    mass = nullptr;
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
