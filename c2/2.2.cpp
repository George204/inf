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
	cout<<"Podaj bok: ";cin>>bok;
	int kat = 0;
	cout<<"1.kwadrat\n2.pieciokat\n3.szeskat\n4.siedmiokat\n";
	cout<<"wybierz figure:";cin>>kat;
	switch(kat){
		case 1:
			cout<<"Kwadrat ";break;
		case 2:
			cout<<"Piecokat ";break;
		case 3:
			cout<<"Szeskat ";break;
		case 4:
			cout<<"Siedmiokat ";break;
	}
	kat += 3;
	float pole = 0;
	pole = (bok*bok*(kat))/(4*tan(M_PI/kat));	
	cout<<"Pole wynosi: "<<pole<<endl;
	ndk;
	return 0;
}
