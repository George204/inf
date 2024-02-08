#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
	float wynik = (pow(4,2)+2*4*7+pow(7,2))/(5.0+37/4.0);
	cout<<fixed<<setprecision(3)<<wynik;
	getch();
}
