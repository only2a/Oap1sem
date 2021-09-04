// 4(доп).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//
//#include <iostream>
//#include <string>
//#include <sstream>
//#include <list>
//#include <iterator>
//
//using namespace std;
//
//int main() {
//    setlocale(LC_CTYPE, "Rus");
//    string buf;
//
//    cout << "Введите текст: ";
//    getline(cin, buf);//Считываем все слова в буфер
//
//    list<string> list;//Создаем список для хранения слов
//    istringstream ist(buf);//Создаем строковый поток копируем туда содержимое буфера
//    while (ist >> buf)//читаем слова по одному из потока
//        if (find(list.begin(), list.end(), buf) == list.end())//проверяем если слово отсуствует в нашем списке
//            list.push_back(buf);//то добавляем его
//
//    cout << "Текст после изменения: ";
//    copy(list.begin(), list.end(), ostream_iterator<string>(cout, " "));//выводим уникальные слова в консоль
//    cout << endl;
//
//    return 0;
//}






#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include "conio.h"
using namespace std;

char* del(char* inStr)
{
    char* newStr = new char[strlen(inStr) + 1]; 
    char* bufStr = new char[strlen(inStr) + 1]; 
    *newStr = '\0'; 
    int i = 0;      
    while (true)
    {
        if (*inStr == ' ' || *inStr == '\0')
        {
            bufStr[i] = '\0'; 
            if (strstr(newStr, bufStr) == NULL)
            {
                strcat(newStr, bufStr); 
            }
            while (*inStr == ' ') 
            {
                int len = strlen(newStr);
                newStr[len] = *inStr++; 
                newStr[len + 1] = '\0'; 
            }
            i = 0;
        }
        if (*inStr == '\0') 
        {
            break;
        }
        bufStr[i++] = *inStr++;
    }
    delete bufStr;
    return newStr;
}

int main()
{
    char* t = new char[255];  
    cin.getline(t, 255); 

    char* s = new char[strlen(t) + 1]; 
    strcpy(s, t); 

    delete[] t; 

    s = del(s);
    cout << s;
    return 0;
}