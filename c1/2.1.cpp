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
#define pln 1
#define eur 4
#define usd 3
#define chf 5
void gotoxy(int x, int y)
{COORD cord;cord.X = x;cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);}
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	cout<<"kwota:";float kwota;cin>>kwota;
	cout<<"\n1.PLN\n2.EUR\n3.USD\n4.CHF";gotoxy(0,1);cout<<"podaj numer twojej walute:";
	char wal1 = tolower(getch());
	cout<<wal1;
	cout<<"\n       \n       \n      \n      ";gotoxy(0,2);		
	int iwal1;
	switch (wal1){
		case '1':
			iwal1 = pln;break;
		case '2':
			iwal1 = eur;break;
		case '3':
			iwal1 = usd;break;
		case '4':
			iwal1 = chf;break;}
	cout<<"\nwartoœæ w PLN:"<<kwota*iwal1/pln;
	cout<<"\nwartoœæ w EUR:"<<kwota*iwal1/eur;
	cout<<"\nwartoœæ w USD:"<<kwota*iwal1/usd;
	cout<<"\nwartoœæ w CHF:"<<kwota*iwal1/chf;
	getch();return 0;
}
