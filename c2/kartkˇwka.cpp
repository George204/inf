#include <iostream>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

using namespace std;

int main() {
    int a = 0,b = 0;
    gotoxy(10,10);
    cout<<"Hello World";
}