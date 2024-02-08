#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <unistd.h>
#include <locale.h>
#define ndk cout<<"naciœnij dowolny klawisz"<<endl<<endl;getch();

using namespace std;
int main(){
	setlocale(LC_CTYPE, "Polish");
while(true) {
	float a;
	cout<<"a:";
	cin>>a;
	float b;
	cout<<"b:";
	cin>>b;
	float c;
	cout<<"c:";
	cin>>c;
	float pole = 2*(a*b+b*c+c*a);
	float obj = a*b*c;
	float kraw = 4*(a+b+c);
	cout<<fixed<<setprecision(2)<<"Pole="<<pole<<endl<<"Objêtoœæ="<<obj<<endl<<"krawêdzie="<<kraw<<endl;
	ndk;
}return 0;}    
