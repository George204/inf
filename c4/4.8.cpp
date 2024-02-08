#include <cctype>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define max 100

using namespace std;

int los(int x){
	int r=1+rand()%(x);
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

void sortt(int tab[max], int size){
    int zmiana = 0;
    do{
        zmiana = 0;
        for(int i=0;i<size-1;i++){
            if(tab[i]>tab[i+1]){
                zmiana = 1;
                int schowek = tab[i];
                tab[i]=tab[i+1];
                tab[i+1]=schowek;
            }
        }
    }while (zmiana == 1);
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
        sortt(tab, size);
        piszt(tab, size);
        cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
