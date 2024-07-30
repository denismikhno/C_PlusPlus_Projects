#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    string str1 = "Game";
    string str2("Over");
    string str3(3, '!');
    string phrase = str1 + " " + str2 + str3;
    cout << phrase << endl;
    phrase[0] = 'L';
    cout << phrase << endl;

    for(int i = 0; i < phrase.size(); ++i)
    {
        cout << "Позиция символа " << phrase[i] << " = " << i << endl;
    }

    return 0;
}
