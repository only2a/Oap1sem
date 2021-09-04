// 10.4(осн).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
using namespace std;
void main()
{
    setlocale(LC_CTYPE, "Russian");
    int a, b, n, p, e, s, q, m, k = 14, maska, maskb = 0x7; char tmp[33], tmz[33];
    cout << "Введите число a: " << endl;
    cin >> a;

    _itoa_s(a, tmp, 2);
    cout << "Число a в двоичном виде до замены: " << tmp << endl;

    cout << "Введите количество битов для замены:"; cin >> n;
    cout << "Позиция,с которой начнётся замена: "; cin >> p;
    maska = (1u << n) - 1;
    maska <<= p;
    _itoa_s((a & maska) >> p, tmp, 2);
    cout << "Выделенные биты А: " << tmp << endl;
  
    a &= ~maska;
    _itoa_s(a, tmp, 2);
    cout << "Число a в двоичном виде после замены: " << tmp << endl;
}


   /* maskB = ~maska >> 1;
    _itoa_s(maskB, tmp, 2);
    cout << "Маска для В: " << tmp << endl;
    _itoa_s(b & maskB, tmp, 2);
    cout << " Очищены биты в B: " << tmp << endl;
    _itoa_s(((b & maskB) | ((a & maska) >> 1)), tmp, 2);
    cout << " Результат B=" << tmp << endl;*/


    /*  _itoa_s(maskb, tmz, 2);
        cout << "Маска для В: " << tmz << endl;
        _itoa_s(b &= maskb, tmz, 2);
        cout << " Очищены биты в B: " << tmz << endl;
        _itoa_s(((b & maskb) | ((a & maska) >> p)), tmp, 2);
        cout << " Результат B=" << tmz << endl;*/

        /*  _itoa_s(b, tmp, 2);
          cout << "Число b в двоичном виде до замены: " << tmp << endl;*/



          /*cout << "Позиция,с которой начнётся замена: "; cin >> q;*/
       /*  e = (q + n)-1;
         m = (2 << e) - (1 << q);*/

/* maskb = ~maska;*/  /* cout << "Введите число b:"; cin >> b;*/  /*=~k*/