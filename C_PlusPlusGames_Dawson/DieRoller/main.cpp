#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    srand(static_cast<unsigned int>(time(0)));  // сеем зерно
    int randomNumber = rand();                  // получаем случайное число
    int die = randomNumber % 6 + 1;             // получаем число между 1 и 6
    cout << RAND_MAX << endl;
    cout << "тебе выпало число: " << die << endl;
    return 0;
}
