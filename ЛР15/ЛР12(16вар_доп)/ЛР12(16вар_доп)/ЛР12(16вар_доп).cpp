// Из текста удалить те его части, которые заключены в кавычки (вместе с кавычками).
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
char* deletechet(char* a)
{
        setlocale(LC_CTYPE, "rus");
        
      

        for (int i = 0; a[i] != 0; i++)
        {

            if (a[i] == '"') {
                for (int j = i; a[j] != 0; j++)
                {

                    i++;
                    if (a[i] == '"') {
                        i++;
                        break;
                    }

                }


            }
            printf("%c", a[i]);
        }
        return a;
}
void main()
{
    setlocale(LC_CTYPE, "Russian");
    char* s1 = new char[256];

    cout << "Введите первую  строку "; cin.getline(s1, 1024);;

    char* r = deletechet(s1);

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
