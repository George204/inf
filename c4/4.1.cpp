#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define max 100

using namespace std;

int tab[max];

int los(int x){
	int r=1+rand()%(x-2);
	return r;
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
void piszt(int tab[max], int n){
    cout<<"Elementy Tablicy:";
    for(int i = 0;i < n;i++){
        cout<<tab[i]<<",";
    }
}
void czytajt(int tab[max], int n){
    for(int i=0;i<n;i++){
        string pyt = "Podaj element nr "+to_string(i+1)+":";
        int x = input(pyt);
        tab[i] = x;
    }
}
void lost(int tab[max], int n){
    for(int i=0;i<n;i++){
        tab[i]=los(9);    
    }    
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int size = input("Ile elementow chcesz podac:");        
        int tab[max];
        czytajt(tab, size);
        piszt(tab, size);
        lost(tab, size);
        cout<<"\nTwoje liczby odwrotnie to: ";
        for(int i=0;i<size;i++){
            cout<<tab[size-i-1]<<" ";
        }
        cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
