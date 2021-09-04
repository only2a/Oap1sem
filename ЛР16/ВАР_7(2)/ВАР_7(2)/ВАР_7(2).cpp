//#include <iostream>
//using namespace std;
//double mn(bool isInt, int n ...)
//{
//	if (isInt == true)
//	{
//		int* p = &n;
//		int min = 100000;
//		for (int i = 0; i < n; i++)
//		{
//			if (*(++p) < min)
//				min = *(++p);
//		}
//		return min;
//	}
//	else return 0;
//}
//void main()
//{
//	cout << mn(true, 8, 5, 8, 3, -12, 1, -7, 3, 5) << endl;
//	cout << mn(true, 9, -8, 3) << endl;
//	cout << mn(false, 1.245, 1.1, 2.6, 4, -3.3, 5) << endl;
//}

//
//
//
//
//
//#include <iostream>
//#include <type_traits>
//
//template<typename T>
//T min(const T& arg)
//{
//	return arg;
//}
//
//template<typename T, typename T2, typename... Args>
//typename std::common_type<T, T2, Args...>::type min(const T& f, const T2& s, const Args&... args)
//{
//	return min(f < s ? f : s, args...);
//}
//
//int main()
//{
//	std::cout << min(10.1, 3.1, 7, 9.1, 6.1, 2, 9.1, 8, 3, 8, -0.10) << std::endl;
//	std::cout << min(2, 5.0, 10.1, 0.1, 8, 12) << std::endl;
//}






#include <iostream>
using namespace std;

int min(int n, ...)
{
	int* p = &n;
	int min = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || min > * (p + i)) min = *(p + i);
	}
	return min;
}

double min(double n, ...)
{
	double* p = &n;
	double min = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 1 || min > * (p + i)) min = *(p + i);
	}
	return min;
}
int main()
{
	setlocale(LC_ALL, "Rus");


	cout << "(4, -5, 6, -90, -12) = " << min(4, -5, 6, -90, -12) << "\n (9.0, -158.45, 300.18, -49.7, -19.345, 74.314, 19.3) = " << min(9.0, -158.45, 300.18, -49.7, -19.345, 74.314, 19.3) << ";\n  (8.0, -144.45, 56.23, -43.7, -90.345, 42.314, -155.3, 72.9) = " << min(8.0, -144.45, 56.23, -43.7, -90.345, 42.314, -155.3, 72.9) << endl;
}