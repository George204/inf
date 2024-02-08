#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naciśnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	float bok = 0;
	float kat = 0;
	float pole = 0;
	cout<<"Podaj bok: ";cin>>bok;
	cout<<"Podaj liczba kot:";cin>>kat;
	pole = (bok*bok*kat)/(4*tan(M_PI/kat));	
	cout<<"Pole wynosi: "<<pole<<endl;
	ndk;
	return 0;
}
