// ВАР_13(1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int sozdmass(int& a, int& b, int** A) {
    int i = 0, j = 0, c = 0;
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            A[i][j] = rand() % 30 - 5;
            printf("%3d ", A[i][j]);



        } 	printf("\n");
    }
    return 0;
}
int proverkaizamena(int& a, int& b, int** A) {
    int sum_1 = NULL;                //суммы элементов диагоналей над главной
    for (int i = 0; i < a - 1; i++)
        for (int j = 1; j < b; j++)
            if (j == i + 1)
            {
                sum_1 += *(*(A + i) + j);
            }
    int sum_2 = 0;
    for (int i = 0; i < a - 2; i++)
        for (int j = 2; j < b; j++)
            if (j == i + 2)
            {
                sum_2 += *(*(A + i) + j);
            }
    int sum_3 = 0;
    for (int i = 0; i < a - 3; i++)
        for (int j = 3; j < b; j++)
            if (j == i + 3)
            {
                sum_3 += *(*(A + i) + j);
            }

    int sum1 = NULL;                         //суммы элементов диагоналей под главной
    for (int i = 1; i < a; i++)
        for (int j = 0; j < b - 1; j++)
            if (i == j + 1)
            {
                sum1 += *(*(A + i) + j);
            }
    int sum2 = 0;
    for (int i = 2; i < a; i++)
        for (int j = 0; j < b - 2; j++)
            if (i == j + 2)
            {
                sum2 += *(*(A + i) + j);
            }
    int sum3 = 0;
    for (int i = 3; i < a; i++)
        for (int j = 0; j < b - 3; j++)
            if (i == j + 3)
            {
                sum3 += *(*(A + i) + j);
            }
    cout << endl;
    cout << "Сумма элементов диагоналей, параллельных главной диагонали матрицы: " << sum_1 << " " << sum_2 << " " << sum_3 << " " << sum1 << " " << sum2 << " " << sum3 << " " << endl;
    cout << endl;
    int massive[6] = { sum_1, sum_2, sum_3, sum1, sum2, sum3 };
    int min = massive[0];
    for (int i = 0; i < 6; ++i)
    {
        if (massive[i] < min)
        {
            min = massive[i];
            return 0;
        }
    }
}
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a = 5, b = 5, i;
    int** A = new int* [a];
    for (i = 0; i < a; i++) {
        A[i] = new int[b];
    }
    sozdmass(a, b, A);
    proverkaizamena(a, b, A);
    printf("\n\n\n\n\n");
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
