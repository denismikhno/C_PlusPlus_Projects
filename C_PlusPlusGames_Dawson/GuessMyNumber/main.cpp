#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);

    // получаем случайное число от 1 до 100
    srand(static_cast<unsigned int>(time(0)));
    int secreteNumber = rand() % 100 + 1;

    // счетчик попыток
    int tries = 0;
    // число введенное тем кто отгадывает
    int guessNumber = 0;

    cout << "\t*Добро пожаловать в игру \"Угадай число!\"*\n\n";

    // основной цикл игры
    do
    {
        cout << "Введи число> ";
        cin >> guessNumber;
        ++tries;
        if (guessNumber > secreteNumber){
            cout << "Угадываемое число меньше того что ты ввел!\n\n";
        }
        else if (guessNumber < secreteNumber){
            cout << "Угадываемое число больше того что ты ввел!\n\n";
        }
        else{
            cout << "Ты угадал! за " << tries << " попыток.\n\n";
        }
    } while (guessNumber != secreteNumber);


    return 0;
}
