
#include < iostream >
#include < windows.h >
#include < string >
#include < algorithm >

using namespace std;

string vvod(unsigned);

void sortirovka(string*, unsigned, unsigned);

void vivod(string*, unsigned);

void main()
{
	setlocale(LC_ALL, "Russian");
	

	cout << "Введите количество слов ";
	unsigned n;
	cin >> n;
	cin.get();

	auto a = new string[n];
	unsigned max_len = 0;

	for (unsigned u = 0; u < n; ++u)
	{
		auto str = vvod(u);

		if (str.size() > max_len)
		{
			max_len = str.size();
		}
		a[u] = str;
	}

	sortirovka(a, n, max_len);

	vivod(a, n);

	system("pause");
}

string vvod(unsigned u)
{
	string str;
	for (;;)
	{
		cout << "Введите слово " << u + 1 << endl;
		getline(cin, str);
		if (str.size() == 0)
		{
			cout << "Ошибка ввода. Недопустимы пустые строки. Повторите это слово" << endl;
			str.clear();
			continue;
		}
		bool valid = true;
		for (auto c : str)
		{
			if (c == ' ')
			{
				valid = false;
				break;
			}
		}
		if (valid)
		{
			break;
		}
		else
		{
			cout << "Ошибка ввода. Недопустимы пробелы. Повторите это слово" << endl;
			str.clear();
		}
	}
	return str;
}

void sortirovka(string* a, unsigned n, unsigned max_len)
{
	for (long long u = max_len - 1; u >= 0; --u)
	{
		auto p = [u](string s1, string s2)
		{
			unsigned s1_len = s1.size();
			unsigned s2_len = s2.size();
			unsigned short_ = (s1_len < s2_len) ? s1_len : s2_len;

			if (u <= short_ - 1)
			{
				return toupper((unsigned char)s1[u]) < toupper((unsigned char)s2[u]);
			}
			else
			{
				return s1_len < s2_len;
			}
		};
		sort(a, a + n, p);
	}
}

void vivod(string* a, unsigned n)
{
	cout << endl;
	for (unsigned u = 0; u < n; ++u)
	{
		cout << a[u] << endl;
	}
	cout << endl;
}
