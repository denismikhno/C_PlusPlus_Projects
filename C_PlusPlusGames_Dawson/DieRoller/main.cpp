#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(static_cast<unsigned int>(time(0)));  // ���� �����
    int randomNumber = rand();                  // �������� ��������� �����
    int die = randomNumber % 6 + 1;             // �������� ����� ����� 1 � 6
    cout << RAND_MAX << endl;
    cout << "���� ������ �����: " << die << endl;
    return 0;
}
