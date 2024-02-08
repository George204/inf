#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <iomanip>
#include <ctime>
void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

using namespace std;

int main() {


	getch();
	return 0;
}