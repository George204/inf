#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <windows.h>
#include <ctime>
#include <string>
//#include <vector>
using namespace std;

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
int los(int x){
	srand(time(NULL));
	int r=1+rand()%(x-2);
	return r;
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
void komentarz(int x,int y, int n){
	gotoxy(x,y);
	string komentarz[4] = {"JESTES SUPER!","SMIALEJ!","NIE PRZESADZAJ!","OJEJ!"};
	cout<<komentarz[n]<<endl;
}
int pytaj(int x,int y,int max,char g){
	system("cls");
	gotoxy(x,y);
	bool k = false;
	int r = 0;
	do{
		cout<<"Gracz "<<g<<" podaj liczbe od 1 do "<<max<<":";cin>>r;
		if(cin.fail()){cout<<"wartosc nieprawidlowa\n";}
		else if(r<1 or r>max){cout<<"liczba nie w zakresie\n";}
		else{k = true;}
		cin.clear();cin.sync();
	}while(k==false);
	return r;
}
string kto_wygral(int o1,int o2){
	if(o1==0){return "gracz 1";}
	else if (o2==0){return "gracz 2";}
	else if (o1==o2 and o2==3){return "remis";}
	else {return "nikt";}
}
int main(){
    bool re = true;
	do{
        int k = los(50);
		int g1=0,g2=0,o1=0,o2=0;
		g1 = pytaj(0,0,50,'1');
		g2 = pytaj(0,0,50,'2');
		system("cls");
		wyswietl(g1,g2,k);
		sprawdz(k,g1,g2,o1,o2);
		cout<<"g1:\ng2:";
		komentarz(3,3,o1);
		komentarz(3,4,o2);
		cout<<"wygral:"<<kto_wygral(o1,o2);
		cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
