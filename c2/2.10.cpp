#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#define sprawdz if(cin.fail()){cout<<"nie numer\n";getch();return 0;}
#define zakres if(a<-15 or a>15){cout<<"a poza zakresem\n";getch();return 0;}
#define clear cin.clear();cin.sync();
using namespace std;

int main()
{
    bool re = false;
    do{
        system("cls");
        int k = 0;
        int a = 0;
        int b = 0;
		do{
			cout<<"podaj a: ";cin>>a;
			if(cin.fail()){cout<<"nie numer\n";}
			else if(a<-15 or a>15){cout<<"a poza zakresem\n";}
			else{k=1;}
			clear;
		}while(k==0);
		k=0;
		do{
			cout<<"podaj b: ";cin>>b;
			if(cin.fail()){cout<<"nie numer\n";}
			else if(b<-15 or b>15){cout<<"a poza zakresem\n";}
			else if(b<a){cout<<"B<A podaj inna wartos\n";}
			else{k=1;}
		}while(k==0);
        int licznik1 = a;
        int licznik3 = a;
        cout<<setw(4)<<left<<" ";
        while(licznik3 <= b)
        {
            cout<<setw(4)<<right<<licznik3;
            licznik3++;
        }
        cout<<endl<<endl;
        while (licznik1 <= b)
        {
            cout<<setw(4)<<left<<licznik1;
            int licznik2 = a;
            while (licznik2 <= b)
            {
                cout.width(4);
                cout<<right<<licznik1*licznik2;
                licznik2++;Sleep(10);
            }
            cout<<endl;
            licznik1++;
        }
        //ndk
        cout<<"jeszcze raz? (T/N)";
        if (tolower(getch())=='t'){re = true;}
        else {re = false;}
    }while(re==true);
    return 0;
}
