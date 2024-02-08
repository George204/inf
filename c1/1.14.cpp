#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#include <ctime>
#define ndk cout<<"\nnaciœnij dowolny klawisz";getch();cout<<"\r                                      \r\n";
#include <windows.h>
void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	srand(time(NULL));
	float x = round((1+rand()/double(RAND_MAX)*9)*10)/10;
	float y = round((1+rand()/double(RAND_MAX)*9)*10)/10;
	float z = round((1+rand()/double(RAND_MAX)*9)*10)/10;
	float a=x,b=y,c=z;
	if(a<b){a=b;}
	if(a<c){a=c;}
	float L = a;
	a=x,b=y,c=z;
	if(a>b){a=b;}
	if(a>c){a=c;}
	float S = a;
	float M = x+y+z-(S+L);
	cout<<"bok1:"<<L<<endl<<"bok2:"<<M<<endl<<"bok3:"<<S<<endl;
	gotoxy(0,23);
	if(L>(S+M)){cout<<"trójk¹t niemo¿liwy";}
	else {cout<<"tójk¹t mo¿liwy";}
	ndk;
	return 0;
}

