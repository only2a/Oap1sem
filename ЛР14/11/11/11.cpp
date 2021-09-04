// 11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//лабораторная работа ДОП 11 варик

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
    int  size = 20, n = 0, m = 0, k = 1;
    int* mass = new int[size];
    for (int i = 0; i < size; i++)
    {
        mass[i] = rand() % 10;
        cout << mass[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        if (mass[i] == 0)
        {
            n = i;
            break;
        }
    }
    cout << "нулевой элемент(элемент):" << n << endl;
    delete[] mass;
    mass = nullptr;
}
void matrix()
{
    int rows = 3, cols = 3, n = 0, k = 0;
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

    int num = 0;
    for (int i = 0; i < rows; i++)
    {
        num = 0;
        for (int j = 0; j < cols; j++)
        {

            if (mass[i][j] == mass[j][i])
            {
                num++;
            }
        }
        if (num == cols) {
            cout << "Строка и столбец совпадают: " << i + 1 << endl;
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
