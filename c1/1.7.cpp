#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"nacionij dowolny klawisz";getch();cout<<"\r                                      \r\n";
using namespace std;
int main()
{while(true){
	const float pi=3.1415926535;
	setlocale(LC_CTYPE, "Polish");
	float r;
	cout<<"r:";
	cin>>r;
	float h;
	cout<<"h:";
	cin>>h;
	float pole = (pi*pow(r,2))*2+2*pi*r*h;
	float obj = pi*pow(r,2)*h;
	float kraw = 4*pi*r;	
	cout<<fixed<<setprecision(2)<<"Pole="<<pole<<endl<<"Objetooa="<<obj<<endl<<"krawedzie="<<kraw<<endl;
	ndk;
}return 0;}

