#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<endl<<"naciœnij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	while(true){
	
	setlocale(LC_CTYPE, "Polish");
	int a;
	cout<<"licznik:";
	cin>>a;
	int b;
	cout<<"mianownik:";
	cin>>b;
	if(b==0){cout<<"nie mo¿na podzieliæ mianownik = 0 ";}
	else if (a%b != 0){cout<<"liczby nie podzielne";}
	else{cout<<"liczby s¹ podzielne";}
	ndk;}
	return 0;
}

