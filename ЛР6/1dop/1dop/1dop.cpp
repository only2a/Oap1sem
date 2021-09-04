#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a = 100, b, c, d; double s;
    while (a <= 999) {
    b = a / 100;
    c = (a - b * 100) / 10;
    d = (a - b * 100 - c * 10);
    s= sqrt(a);
   
        if ((c > b) && (c < d) && (fmod(a, s) == 0)) {cout << a << endl; break;
    }
  
          a++;
    }
    return(0);
    
}

