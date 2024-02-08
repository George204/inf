#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

int input(string g){
	bool k = false;
	int x = 0;
	do{
		cout<<g;cin>>x;
		if(cin.fail()){cout<<"wartosc nieprawidlowa\n";}
		else{k = true;}
		cin.clear();cin.sync();
	}while(k==false);
	return x;
}

string sprawdz(int a , int b){
	if(a<b){
		return "ZA MALO";
	}
	else if(a>b){
		return "ZA DUZO";
	}
	else{
		return "TO JEST TO";
	}
}

void napisz(int x, int y, string z){
	gotoxy(x,y);
	cout<<z;
}

int los(int x){
	int r=1+rand()%(x-2);
	return r;
}

int main(){
    bool re = true;
	do{
		srand(time(NULL));
        system("cls");
        int l = los(100);
        bool d =false;
        while(d==false){
			int u = input("\npodaj liczbe calkowita:");
	        system("cls");
	        napisz(0,0,sprawdz(u,l));
	        if(u==l){d=true;}
    	}
		cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
