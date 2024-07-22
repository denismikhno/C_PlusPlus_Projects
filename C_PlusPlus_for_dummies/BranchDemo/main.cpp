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
    cout << "¬ведите arg1> ";
    cin >> nArg1;

    int nArg2;
    cout << "¬ведите arg2: ";
    cin >> nArg2;

    if(nArg1 > nArg2)
    {
       cout << "јргумент 1 больше, чем аргумент 2" << endl;
    }
    else
    {
       cout << "јргумент 1 не больше, чем аргумент 2" << endl;
    }

    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
