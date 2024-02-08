#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naciœnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	string imie;
		cout<<"jakie jest twoje imie?\n";
		cin>>imie;
	while(true)
	{
		system("cls");
		cout<<imie<<" podaj swoje liczby\n";
		float a;
		cout<<"a:";
		cin>>a;
		float b;
		cout<<"b:";
		cin>>b;
		float c;
		cout<<"c:";
		cin>>c;
		cout<<imie<<" œrednia z twoich liczb to "<<(a+b+c)/3<<"\n";
		ndk;
	}
return 0;
}
