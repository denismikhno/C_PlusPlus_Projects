#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    // �������� ��������� ����� �� 1 �� 100
    srand(static_cast<unsigned int>(time(0)));
    int secreteNumber = rand() % 100 + 1;

    // ������� �������
    int tries = 0;
    // ����� ��������� ��� ��� ����������
    int guessNumber = 0;

    cout << "\t*����� ���������� � ���� \"������ �����!\"*\n\n";

    // �������� ���� ����
    do
    {
        cout << "����� �����> ";
        cin >> guessNumber;
        ++tries;
        if (guessNumber > secreteNumber){
            cout << "����������� ����� ������ ���� ��� �� ����!\n\n";
        }
        else if (guessNumber < secreteNumber){
            cout << "����������� ����� ������ ���� ��� �� ����!\n\n";
        }
        else{
            cout << "�� ������! �� " << tries << " �������.\n\n";
        }
    } while (guessNumber != secreteNumber);


    return 0;
}
