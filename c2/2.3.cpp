#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#include <iostream>
#define ndk cout<<"naciśnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	cout<<"podaj liczbę";int liczba;cin>>liczba;
    int dlugosc=0;
    while(liczba>0){
        liczba/=10;
        dlugosc++;
    }
    switch (dlugosc)
    {
    case 1:
        cout<<"liczba ma 1 cyfrę";break;
    case 2:
        cout<<"liczba ma 2 cyfry";break;
    case 3:
        cout<<"liczba ma 3 cyfry";break;
    case 4:
        cout<<"liczba ma 4 cyfry";break;
    case 5:
        cout<<"liczba ma 5 cyfry";break;
    case 6:
        cout<<"liczba ma 6 cyfry";break;
    case 7:
        cout<<"liczba ma 7 cyfry";break;
    default:
        cout<<"liczba ma więcej niś 7 cyfr lub mniej";break;
    }
    ndk;
	return 0;
}