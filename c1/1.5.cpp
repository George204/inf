#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define a 7.0
#define b 12.0
#define c 16.0

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	float avg = (a+b+c)/3;
	cout<<fixed<<setprecision(2)<<"œrednia="<<avg;
	getch();
	return 0;
}
