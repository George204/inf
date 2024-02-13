#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define maxx 12
//#include <termios.h> 
//#include <unistd.h> 
//#include <stdio.h> 
#define nor   "\033[0m"
#define bla   "\033[30m"      
#define red     "\033[31m"      
#define gre   "\033[32m"      
#define yel  "\033[33m"      
#define blu    "\033[34m"      
#define pir "\033[35m"      
#define cya    "\033[36m"      
#define whi   "\033[37m"
#define bbla   "\033[40m"      
#define bred     "\033[41m"      
#define bgre   "\033[42m"      
#define byel  "\033[43m"      
#define bblu    "\033[44m"      
#define bpir "\033[45m"      
#define bcya    "\033[46m"      
#define bwhi   "\033[47m"

using namespace std;
//
//int getch(void) 
//{ 
//    struct termios oldattr, newattr; 
//    int ch; 
//    tcgetattr(STDIN_FILENO, &oldattr); 
//    newattr = oldattr; 
//    newattr.c_lflag &= ~(ICANON | ECHO); 
//    tcsetattr(STDIN_FILENO, TCSANOW, &newattr); 
//    ch = getchar(); 
//    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); 
//    return ch; 
//}
void gotoxy(int x, int y)
{    
    printf("%c[%d;%df",0x1B,y,x);
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
    else {system("cls");}
}
int los(int x){
	int r=1+rand()%(x);
	return r;
}
void color(int n){
    switch (n) {
        case 0:
            cout<<cya<<bblu<<"  "<<nor;
            break;
        case 1:
            cout<<whi<<bbla<<"1 "<<nor;
            break;
        case 2:
            cout<<whi<<bbla<<"2 "<<nor;
            break;
        case 3:
            cout<<whi<<bbla<<"3 "<<nor;
            break;
        case 4:
            cout<<whi<<bbla<<"4 "<<nor;
            break;
        case 5:
            cout<<yel<<bblu<<"  "<<nor;
            break;
        case 7:
            cout<<red<<bblu<<"O "<<nor;
            break;
        case 8:
            cout<<gre<<bblu<<"X "<<nor;
            break;
        default:
            cout<<blu<<bblu<<n<<nor;
            break;
    }
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
void piszt(int tab[maxx], int n){
    cout<<"Elementy Tablicy:";
    for(int i = 0;i < n;i++){
        cout<<tab[i]<<",";
    }
    cout<<endl;
}
void czytajt(int tab[maxx], int n){
    for(int i=0;i<n;i++){
        string pyt = "Podaj element nr "+to_string(i+1)+":";
        int x = input(pyt);
        tab[i] = x;
    }
}
void lost(int tab[maxx], int n){
    for(int i=0;i<n;i++){
        tab[i]=los(9);    
    }    
}
void piszt2(int tab[maxx][maxx],int n,int m){
    for(int i=0;i<n;i++){
        cout<<"Elementy "<<i<<" wirsza: ";
        for(int j=0;j<m;j++){
            cout<<tab[i][j]<<",";
        }
        cout<<endl;
    }
}
void czytajt2(int tab[maxx][maxx], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string pyt = "Podaj element "+to_string(i)+","+to_string(j)+":";
            int x = input(pyt);
            tab[i][j] = x;
        }
    }
}
void lost2(int tab[maxx][maxx], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tab[i][j]=los(9);    
        }    
    }
}
