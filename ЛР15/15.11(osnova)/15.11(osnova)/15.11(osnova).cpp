// Отредактировать заданное предложение, удаляя из него все слова с чётными номерами.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
char* deletechet(char* a)
{/*
	setlocale(LC_CTYPE, "Russian");
	int beg, end;
    char text[1024];
    int l = strlen(a);
    for (int i = 0; i < l; i++)
        text[i] = a[i];
    for (int i = 0, iWord = 0; i < l; i++)
    {
        if (text[i] == ' ')
        {
            beg = i;
            i++;
            while (text[i] != ' ')
                i++;
            iWord++;
            end = i;
            if ((iWord - 1) % 2 == 0)
                if (strcpy(&text[beg], &text[end]))
                    a[strlen(text) - (end - beg)] = '\0';
            i -= 2;
        }
    } cout << "Строка после удаления чётных слов\n";
    cout << text << endl; return text;*/
    setlocale(LC_CTYPE, "rus");
  /*  char s[357];*/
    int i, j, n;
   /* printf("Введите строку: ");
    gets_s(s);*/
    n = 0;
    for (i = 0; a[i] != 0; i++)
    {
        if (a[i] == ' ') {
            n++;
            printf("%c", a[i]);
            if (n % 2 != 0)
            {
                for (j = i + 1; a[j] != ' '; j++);
                i = j; n++;
            }
        }

        else
            printf("%c", a[i]);

    }
    printf("\n"); return 0;
}
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char* s1 = new char[10];
	
	cout << "Введите первую  строку "; cin.getline(s1, 1024);;
	
	char* r = deletechet(s1);
    delete[]r;
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
