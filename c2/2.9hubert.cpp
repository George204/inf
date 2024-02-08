#include <iostream>
#include <locale.h>
#include <list>
#include <conio.h>
using namespace std;

int main() {
    char o = 't';
	do{
		system("cls");
		int a,b;
		//podaj a
		bool koniec = false;
	    do{
	    	cout<<"podaj a: ";
			cin>>a;
	    	if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
	    	else if(a<=0){cout<<"podana wartosc jest niedodatnia"<<endl;}
			else{koniec = true;}
			cin.clear();cin.sync();
		}while(koniec == false);
		//podaj b
		koniec = false;
	    do{
	    	cout<<"podaj b: ";
			cin>>b;
	    	if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
	    	else if(b<=0){cout<<"podana wartosc jest niedodatnia"<<endl;}
			else{koniec = true;}
			cin.clear();cin.sync();
		}while(koniec == false);	
		//NWW
	    int c=a;
	    int d=b;
	    do{
	        if (c>d){d=d+b;}
	        else if (d>c){c=c+a;}
	    }while (c!=d);
	    cout<<"NWW="<<c<<endl;    
	    //NWD
	    int nwd = 1;
	    int pruba = 1;
	    do
	    {
	        if (a % pruba == 0 && b % pruba == 0){nwd = pruba;}
	        pruba++;
	    }while (pruba <= a && pruba <= b);
	    if (nwd>1){cout<<"NWD="<<nwd<<endl;}
	    else {cout<<"NWD="<<"brak"<<endl;}
		cout<<"czy dalej (T/N)";
		o = tolower(getch());         
	}while(o == 't');
}
