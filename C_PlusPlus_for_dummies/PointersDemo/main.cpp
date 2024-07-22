#include <iostream>
#include <windows.h>

using namespace std;

void fn(int arg);
void parent();

void fnPointer(int* arg);
void parentPointer();

void fnLink(int& arg);
void parentLink();

int main()
{
    SetConsoleOutputCP(1251);
    int roomNumber;
    int dadsRoom = 101;
    int* mySon = &dadsRoom;
    roomNumber = *mySon;

    cout << "Мой отец в комнате № " << roomNumber << endl;

    parent();
    parentPointer();
    parentLink();


    return 0;
}

void fn(int num)
{
    num = 10;
}

void parent()
{
    int n = 0;
    fn(n);
    cout << n << endl;
}

void fnPointer(int* num)
{
    *num = 10;
}

void parentPointer()
{
    int n = 0;
    fnPointer(&n);
    cout << n << endl;
}

void fnLink(int& num)
{
    num = 20;
}

void parentLink()
{
    int n = 0;
    fnLink(n);
    cout << n << endl;
}
