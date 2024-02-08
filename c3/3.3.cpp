#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>

using namespace std;

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
int getin(int m){
	int wart = 0;
	do{
	wart = getch();
	wart -= 48;
	}while(wart<1 or wart>m);
	return wart;
}
void sil_i(){
	system("cls");
	int n = 0,s=1;
	n = input("podaj n:");
	if(n!=0){
	for(int i=1;i<=n;i++){
		s = s*i;
	}}
	cout<<"silnia = "<<s<<endl;
}
int sil_r(int n){
	if(n == 0){return 1;}
	else{return n*sil_r(n-1);}
}
void nwd_i(){
	int x = input("podaj a:");
	int y = input("podaj b:");
	while(x!=y){
		if(x>y){x-=y;}
		else{y-=x;}
	}
	cout<<"nwd: "<<x<<endl;
}
int nwd_r(int a,int b){
	if(b == 0){return a;}
	else{return nwd_r(b,a%b);}
}
void fib_i(){
	int n = input("podaj n:");
    unsigned long long out = (pow((1+sqrt(5))/2,n)-pow((1-(1+sqrt(5))/2),n))/sqrt(5);
	cout<<out<<endl;
}
int fib_r(int n){
	if(n<=2){return 1;}
	else{return fib_r(n-1)+fib_r(n-2);}
}
void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
void menu(){
	string opcje[5] = {"1.silnia","2.NWD","3.n_fibonaccie","1.interacyjnie","2.rekurencyjnie"};
	for(int i=0;i<=2;i++){cout<<opcje[i]<<endl;}
	int o = 10*getin(3);
	for(int i=0;i<=1;i++){cout<<opcje[i+3]<<endl;}
	o += getin(2);
	switch(o){
		case 11:
			sil_i();
			break;
		case 12:{
			int n = input("podaj n:");
			int sil = sil_r(n);
			cout<<sil;
			break;}
		case 21:
			nwd_i();
			break;
		case 22:{
			int a = input("podaj a:");
			int b = input("podaj b:");
			int nwd = nwd_r(a , b);
			cout<<nwd;
			break;}
		case 31:
			fib_i();
			break;
		case 32:
			int n = input("podaj n:");
			int fib = fib_r(n);
			cout<<"wartosc ntego number:"<<fib;
			break;	
	}
}
int main(){
    bool re = true;
	do{
        system("cls");
        menu();
		cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
