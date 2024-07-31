#include <iostream>
#include <windows.h>

using namespace std;

//void showBoard(char** arr, int rows, int columns);
void showBoard(char* arr, int rows, int columns);

int main()
{
    SetConsoleOutputCP(1251);

    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = {
        {'0', 'X', '0'},
        {' ', 'X', 'X'},
        {'X', '0', '0'}
    };

//    char* boardToPrint[] = {board[0], board[1], board[2]};

    cout << "Доска для крестиков-ноликов:\n";
    showBoard(board[0], ROWS, COLUMNS);

    return 0;
}

void showBoard(char* arr, int rows, int columns)
{
    for(int  i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            cout << *(arr + i * columns + j);
            //cout << arr[i * cols + j];
        }
    cout << endl;
    }
}

//void showBoard(char** arr, int rows, int columns)
//{
//    for(int  i = 0; i < rows; ++i)
//    {
//        for(int j = 0; j < columns; ++j)
//        {
//            cout << arr[i][j];
//        }
//        cout << endl;
//    }
//}
