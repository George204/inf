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
	float a;
	cout<<"a:";
	cin>>a;
	float b;
	cout<<"b";
	if (0 >= a or 0 >= b) {	
		cout<<fixed<<setprecision(2)<<"liczba podana w pokach nie wi�ksza ni� 0"<<endl;
	}
	else{
		cout<<"pole prostok�ta "<<a*b<<endl;
	}
	ndk;
	return 0;
}

