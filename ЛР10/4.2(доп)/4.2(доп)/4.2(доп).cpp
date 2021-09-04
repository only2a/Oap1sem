// 4.2(доп).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//
//#include <iostream> 
//using namespace std;
//void main()
//{
//    setlocale(LC_CTYPE, "Russian");
//    int a, n, p,z, maska; char tmp[33];
//    cout << "Введите число a: " << endl;
//    cin >> a;
//    _itoa_s(a, tmp, 2);
//    cout << "Число a в двоичном виде до замены: " << tmp << endl;
//    cout << "Введите количество битов для замены:"; cin >> n;
//    cout << "Позиция,с которой начнётся замена: "; cin >> p;
// /*   maska = (1u << n) - 1;
//    maska <<= p;*/
//    z =( p - n);
//    /*_itoa_s((a & maska) >> p, tmp, 2);
//    cout << "Выделенные биты А: " << tmp << endl;*/
//   /* a ^= ~maska;*/
//    /*_itoa_s(a, tmp, 2);*/
//    
//   while (p >= z)
//    {
//        a |= 1 << p;
//        _itoa_s(a, tmp, 2);
//        p--;
//    }
//    cout << "Число a в двоичном виде после замены: " << tmp << endl;
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_CTYPE, "Russian");
//    int A, position, n, razn, B;
//    char tmp[33];
//    cin >> A;
//    _itoa_s(A, tmp, 2);
//    cout << tmp << endl;
//    cin >> position;
//    cin >> n;
//    razn = position - n;
//    while (position >= razn)
//    {
//        A |= 1 << position;
//        _itoa_s(A, tmp, 2);
//        position--;
//    }
//    cout << tmp;
//}

 
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    int A, position, n, razn;
    char tmp[33];
    cout << "Введите A" << endl;
    cin >> A;
    _itoa_s(A, tmp, 2);
    cout << tmp << endl;
    cout << "Введите начальную позицию" << endl;
    cin >> position;
    cout << "Введите число битов" << endl;
    cin >> n;
    razn = position - n;
    while (position >= razn)
    {
        A |= 1 << position;
        _itoa_s(A, tmp, 2);
        position--;
    }

    cout << tmp << endl;
}