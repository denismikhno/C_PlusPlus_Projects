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

    cout << "Размер bool        = " << sizeof b << endl;
    cout << "Размер char        = " << sizeof c << endl;
    cout << "Размер int         = " << sizeof i << endl;
    cout << "Размер long        = " << sizeof l << endl;
    cout << "Размер long long   = " << sizeof ll << endl;
    cout << "Размер float       = " << sizeof f << endl;
    cout << "Размер double      = " << sizeof d << endl;
    cout << "Размер long double = " << sizeof ld << endl;

    return 0;
}
