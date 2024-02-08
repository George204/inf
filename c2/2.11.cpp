#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
    bool re = false;
    do{
		system("cls");
        int n = 0;
        int m = 100;
        int koniec = 0;
        while(koniec == 0){
            int k = 0;
    	    do{
				cout<<"podaj liczbe 2 cyfrowa:";cin>>n;
				if(cin.fail()){cout<<"podana wartosc nie jest prawilowa"<<endl;}
				else if(n==0){
					if(m==100){cout<<"nie podales zadnej wartosci\n";}
					else{koniec = 1;k=1;}
				}
				else if(n<10 || n>99){cout<<"podana wartosc nie jest 2 cyfrowa dodatnia"<<endl;}
				else{
				if(n<m){m=n;}
				k=1;}
				cin.clear();cin.sync();
			}while(k==0);	
        }
        cout<<"najmniejsza wartosc:"<<m<<endl;
        cout<<"jeszcze raz? (T/N)";
        if (tolower(getch())=='t'){re = true;}
        else {re = false;}
    }while(re==true);
    return 0;
}
