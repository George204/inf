#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"\nnacii?1nij dowolny klawisz";getch();cout<<"\r                                      \r\n";
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
	
	float a,b,c,d;
	cout<<fixed<<setprecision(2)<<"równanie ax^2+bx+c=d"<<endl;
	cout<<"a:";	cin>>a;
	cout<<"b:"; cin>>b;
	cout<<"c:";	cin>>c;
	cout<<"d:";	cin>>d;
	gotoxy(0,20);
	if(a==0){
		if(b==0){
			if(c==d){cout<<"równanie tozszamoociowe";}
			else {if (c!=d){cout<<"równanie sprzeczne";}}}
		else{cout<<"x="<<((d-c)/b);}}
	else{
		c = c-d;
		float delta = pow(b,2)-(4*a*c);
		if(delta == 0){
			float x = (-1*b)/(2*a);
			cout<<"x:"<<x;
		}
		if(delta > 0){
			float x1 = (-b-sqrt(delta))/(2*a);
			float x2 = (-b+sqrt(delta))/(2*a);
			cout<<"x1:"<<x1<<"\nx2:"<<x2; }
		else {if (delta < 0){cout<<"brak rozwi1zan";}}}
	ndk;
	return 0;
}
