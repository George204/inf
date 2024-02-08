#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
    bool re = false;
    do{
        system("cls");
        int a=0,b=0;
        //podaj a i b
		int pytanie = 0;
	    do{
	    	if (pytanie == 0){cout<<"podaj a: ";cin>>a;}
            else{cout<<"podaj b: ";cin>>b;}
	    	if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
			else{pytanie++;}
			cin.clear();cin.sync();
		}while(pytanie < 2);
        //nwd
        int x = a, y = b, r = 0;
        do{
            r = x%y;
            if(r==0){cout<<"NWD = "<<y<<endl;}
            else{x = y;y = r;}
        }while(r!=0);
        //nww
        cout<<"NWW = "<<(a*b)/y<<endl;
        //ndk
        cout<<"jeszcze raz? (T/N)";
        if (tolower(getch())=='t'){re = true;}
        else {re = false;}
    }while(re==true);
    return 0;
}