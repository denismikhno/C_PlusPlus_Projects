#include <iostream>

using namespace std;

int main()
{
    bool b;
    char c;
    int i;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    cout << "-----------------------" << endl;
    cout << "&b           = " << &b << endl;
    cout << "&char        = " << (void *)&c << endl;
    cout << "&int         = " << &i << endl;
    cout << "&long        = " << &l << endl;
    cout << "&long long   = " << &ll << endl;
    cout << "&float       = " << &f << endl;
    cout << "&double      = " << &d << endl;
    cout << "&long double = " << &ld << endl;
    cout << "-----------------------" << endl;

    return 0;
}
