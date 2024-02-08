#include <cctype>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define max 100

using namespace std;

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
    cout<<"\nElementy Tablicy:";
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
char getin(){
    char wart = 'z';
    do{
        wart = tolower(getch());
    }while(wart != 't' and wart != 'n');
    return wart;
}
string sprczyw(int n,int tab[max] ,int size){
    string odp = "Nie";
    for(int i=0;i<size;i++){
        if( tab[i] == n){
            if(odp == "Nie"){odp = "Tak indexy:";}
            odp = odp+to_string(i)+",";
        }
    }
    return odp;
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int size = input("Jaki ma byc rozmiar tablicy: ");        
        int tab[size];
        cout<<"podajemy ? t or n\n";
        char ans = getin();
        if(ans == 't'){
            czytajt(tab, size);
        }
        else{
            lost(tab, size);
        }
        piszt(tab, size);
        int szuk = input("\njako liczbe chcesz sprawdzic?: ");
        cout<<"czy jest:"<<sprczyw(szuk,tab,size);
        cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
