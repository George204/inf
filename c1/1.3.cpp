#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	cout<< "cze��";
	sleep(5);system("cls");
	float polepow = pow(5.875,2)*6;
	float obj = pow(5.875,3);
	cout<<fixed<<setprecision(2)<<"pole pow.:"<<polepow<<endl<<"obj�to��:"<<obj;
	getch();
	return 0;
}
