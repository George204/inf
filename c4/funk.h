#include <iostream>
//#include <conio.h>
#include <string>
#include <ctime>
#define max 100


#include <termios.h> 
#include <unistd.h> 
#include <stdio.h> 
using namespace std;

int getch(void) 
{ 
    struct termios oldattr, newattr; 
    int ch; 
    tcgetattr(STDIN_FILENO, &oldattr); 
    newattr = oldattr; 
    newattr.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr); 
    ch = getchar(); 
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); 
    return ch; 
}
char getin(){
    char wart = 'z';
    do{
        wart = tolower(getch());
    }while(wart != 't' and wart != 'n');
    return wart;
}
void jeszcze(bool &re){
    cout<<"\njeszcze raz? (T/N)"<<endl;
    if (getin()!='t'){re = false;}
}
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
    cout<<endl;
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
void piszt2(int tab[max][max],int n,int m){
    for(int i=0;i<n;i++){
        cout<<"Elementy "<<i<<" wirsza: ";
        for(int j=0;j<m;j++){
            cout<<tab[i][j]<<",";
        }
        cout<<endl;
    }
}
void czytajt2(int tab[max][max], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string pyt = "Podaj element "+to_string(i)+","+to_string(j)+":";
            int x = input(pyt);
            tab[i][j] = x;
        }
    }
}
void lost2(int tab[max][max], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]=los(9);    
        }    
    }
}
