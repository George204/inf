#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naci�nij dowolny klawisz";getch();cout<<"\r                                      \r\n";

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");

	float side = 0;
	float angles = 0;
	float area = 0;
	
	cout<<"Podaj bok: ";
	cin>>side;
	
	cout<<"Podaj liczb� liczb� k�t�w:";
	cin>>angles;
		
	
	area = (side*side*angles)/(4*tan(M_PI/angles));	
	
	cout<<"Pole wynosi: "<<area<<endl;
	
	ndk;
	return 0;
}
