#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <ctime>
//#include <vector>
using namespace std;
void input(int &x,char g){
	bool k = false;
	do{
		cout<<"Gracz "<<g<<" podaj liczbe:";cin>>x;
		if(cin.fail()){cout<<"wartosc nieprawidłowa\n";}
		else if(x<1 or x>50){cout<<"liczba nie w zakresie\n";}
		else{k = true;}
		cin.clear();cin.sync();
	}while(k==false);
}
void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
void gwiazdki(int x,int y,int n){
	gotoxy(x,y);
	for(int i=0;i<n;i++){
		cout<<"*";}
	cout<<endl;
}
int los(int a,int b){
	srand(time(NULL));
	int x=a+rand()%(b-a+1);
	return x;
}
void wyswietl(int g1,int g2,int k){
	cout<<"g1:\ng2:\nk :";
	gwiazdki(3,0,g1);
	gwiazdki(3,1,g2);
	gwiazdki(3,2,k);
}
void sprawdz(int k,int g1, int g2, int &o1, int &o2){
	if(g1>k){o1 = 2;}
	if(g2>k){o2 = 2;}
	if(o1==0 and g1 > g2){o2 = 1;}
	if(o2==0 and g2 > g1){o1 = 1;}
	if(o1 == 0 and o2 == 0){o1 = 3;o2 = 3;}
}

int main(){
    bool re = true;
	do{
		system("cls");
        int k = los(1,50);
		int g1=0,g2=0,o1=0,o2=0;
		input(g1,'1');
		system("cls");
		input(g2,'2');
		system("cls");
		wyswietl(g1,g2,k);
		sprawdz(k,g1,g2,o1,o2);
		cout<<"g1:\ng2:";
		gotoxy(3,3);cout<<o1;
		gotoxy(3,4);cout<<o2<<endl;
		cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
