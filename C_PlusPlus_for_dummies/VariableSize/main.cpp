#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bool b;
    char c = 'a';
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    cout << "������ bool        = " << sizeof b << endl;
    cout << "������ char        = " << sizeof c << endl;
    cout << "������ int         = " << sizeof i << endl;
    cout << "������ long        = " << sizeof l << endl;
    cout << "������ long long   = " << sizeof ll << endl;
    cout << "������ float       = " << sizeof f << endl;
    cout << "������ double      = " << sizeof d << endl;
    cout << "������ long double = " << sizeof ld << endl;

    return 0;
}
