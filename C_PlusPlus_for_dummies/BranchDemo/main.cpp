#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int nArg1;
    cout << "������� arg1> ";
    cin >> nArg1;

    int nArg2;
    cout << "������� arg2: ";
    cin >> nArg2;

    if(nArg1 > nArg2)
    {
       cout << "�������� 1 ������, ��� �������� 2" << endl;
    }
    else
    {
       cout << "�������� 1 �� ������, ��� �������� 2" << endl;
    }

    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
