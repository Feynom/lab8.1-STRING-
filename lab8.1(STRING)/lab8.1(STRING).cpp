#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int kilkist(const string str);
string modified(string& str);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;

    cout << "Введіть строку: ";
    getline(cin, str);

    cout << "Число входжень в послідовність групи букв 'while': " << kilkist(str) << endl;
    cout << "Модифікована строка: " << modified(str) << endl;

    return 0;
}
int kilkist(const string str)
{
    int k = 0;
    size_t pos = 0;
    while((pos = str.find("while", pos, 5)) < str.size())
    {
            k++;
            pos += 5;
    }
    return k;
}
string modified(string& str)
{
    size_t pos = 0;
    while ((pos = str.find("while", pos, 5)) < str.size())
        str.replace(pos, 5, "***");
    return str;
}
