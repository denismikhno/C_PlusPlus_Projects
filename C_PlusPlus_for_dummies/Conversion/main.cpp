#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int celsius;
    cout << "������� ����������� � �������� �������> ";
    cin >> celsius;

    int factor;
    factor = 212 - 32;

    int fahrenheit;
    fahrenheit = factor * celsius / 100 +32;

    cout << "����������� � �������� ���������� = ";
    cout << fahrenheit << endl;
    cout << "������� Enter ��� �����������..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
