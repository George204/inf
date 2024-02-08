#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define bok 7.225
using namespace std;
int main()
{
	cout<<"obliczenia dla bok="<<bok<<endl;
	setlocale(LC_CTYPE, "Polish");
	float pole = pow(bok,2)*6;
	float vol = pow(bok,3);
	float kraw = bok*12;
	cout<<fixed<<setprecision(2)<<"P="<<pole<<endl<<"O="<<vol<<endl<<"S="<<kraw;
	getch();
	return 0;
}
