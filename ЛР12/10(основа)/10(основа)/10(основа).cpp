#include <iostream>
using namespace std;
void main()
{
	char name[30];
	int n;
	gets_s(name);
	n = strlen(name);
	for (int i = n; i > 0; i--)
		cout << name[i - 1];
}
//
//#include <iostream>
//using namespace std;
//void main()
//{
//	char name[30];
//	int n;
//	gets_s(name);
//	n = strlen(name);
//	for (int i = n; i > 0; i--) {
//		cout << *(name + (i)-1);
//	}
//}