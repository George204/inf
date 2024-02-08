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

	float side = 0;
	float angles = 0;
	float area = 0;
	
	cout<<"Podaj bok: ";
	cin>>side;
	
	cout<<"Podaj liczbê liczbê k¹tów:";
	cin>>angles;
		
	
	area = (side*side*angles)/(4*tan(M_PI/angles));	
	
	cout<<"Pole wynosi: "<<area<<endl;
	
	ndk;
	return 0;
}
