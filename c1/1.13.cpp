#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <locale.h>
#define ndk cout<<"\nnacii?1nij dowolny klawisz";getch();cout<<"\r                                      \r\n";
#define sprawdz if(cin.fail()){cout<<"ty g�upi o�le\n";ndk;return 0;}cin.clear();cin.sync();
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");
	int a,b,c;
	cout<<"a:";	cin>>a;
	sprawdz;
	cout<<"b:"; cin>>b;
	sprawdz;
	cout<<"c:";	cin>>c;
	sprawdz;
	if(a<b){a=b;}
	if(a<c){a=c;}
	cout<<"najwi�ksza liczba:"<<a;
	ndk;
	return 0;
}
