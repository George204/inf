#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#include <ctime>
#define ndk cout<<endl<<"nacionij dowolny klawisz";getch();cout<<"\r                                      \r\n";
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
	int a;cout<<"a:";cin>>a;
	int b;cout<<"b:";cin>>b;
	srand(time(NULL));
	int x=a+rand()%(b-a+1);
	int y=a+rand()%(b-a+1);	
	gotoxy(0,20);
	cout<<fixed<<setprecision(2)<<"liczba 1:"<<x<<endl<<"liczba 2:"<<y;
	int mx = 40,my = 3;
	gotoxy(mx,my);cout<<"1.dodawanie";
	gotoxy(mx,my+1);cout<<"2.odejmowanie";
	gotoxy(mx,my+2);cout<<"3.mno¿enie";
	gotoxy(mx,my+3);cout<<"4.dzielenie";
	gotoxy(mx,my+4);cout<<"5.dzielenie ca³kowite";
	gotoxy(mx,my+5);cout<<"6.reszta z dzielenia";
	gotoxy(mx,my+6);cout<<"7.pierwiastek kwadratowy 2x-2y^2";
	int dzialanie;
	gotoxy(mx,my+8);cout<<"wpisz numer wybranej opcji:";cin>>dzialanie;
	gotoxy(mx,my+9);cout<<"wybrana opcja:"<<dzialanie;
	gotoxy(0,22);cout<<"wynik dzia³ania:";
	if (dzialanie == 1){cout<<x+y;}
	else if (dzialanie == 2){cout<<x-y;}
	else if (dzialanie == 3){cout<<x*y;}
	else if (dzialanie == 4){
		if(y==0){cout<<"\r nie mo¿na podzieliæ przez 0";}
		else{float z = y;cout<<x/z;}}
	else if (dzialanie == 5){
		if(y==0){cout<<"\r nie mo¿na podzieliæ przez 0";}
		else{cout<<x/y;}}
	else if (dzialanie == 6){
		if(y==0){cout<<"\r nie mo¿na podzieliæ przez 0";}
		else{cout<<x%y;}}
	else if (dzialanie == 7){
		if((2*x-2*pow(y,2)>0)){cout<<sqrt(2*x-2*pow(y,2));}
		else{cout<<"pierwiastek z liczby <0";}}
	else{cout<<"\rŸle podane dzia³anie";}
	gotoxy(0,23);ndk;
	return 0;
}
