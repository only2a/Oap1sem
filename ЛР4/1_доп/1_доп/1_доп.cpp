// 1_доп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    double a, b, x, n; int i;
    cout << "Введите числа" << endl; cin >> a >> b;
    n = 0;
    while (n < 1000) {
    puts("Выберите операцию,которую вы хотите выполнить(1 -Сколько процентов составляет одно число от другого (%); 2 - умножение (*) ; 3 -деление (/); 4 - сумма (+); 5 - разность (-)). ");
    cin >> i; 
    
        switch (i)
        {
        case 1: { puts("Вы хотите найти: 1) процент a от b или 2) процент b от a ");
            cin >> i;
            switch (i) {
            case 1: {x = a * 100 / b; cout << x << "%" << endl; break; }
            case 2: {x = b * 100 / a; cout << x << "%" << endl; break; }
            }
            break;
        }
        case 2: { x = a * b; cout << "Результат умножения " << x << endl;
            break; }
        case 3: { puts("Вы хотите найти: 1) a/b или 2) b/a ");
            cin >> i;
            switch (i) {
            case 1: {x = a / b; cout << "Результат деления " << x << endl; break; }
            case 2: {x = b / a; cout << "Результат деления" << x << endl; break; }
            } break;
        }
        case 4: {x = a + b; cout << "Результат суммы " << x << endl;
            break; }
        case 5: {puts("Вы хотите найти: 1) a-b или 2) b-a ");
            cin >> i;
            switch (i) {
            case 1: {x = a - b; cout << "Результат разности " << x << endl; break; }
            case 2: {x = b - a; cout << "Результат разности" << x << endl; break; }
            } }
              
        }
        n++;
    }
    return(0);
}