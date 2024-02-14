#include "funk.h"
#include <cctype>
#include <iostream>
#include <stdlib.h>
#define max 12
using namespace std;
int s = 12;

void plansza(int tab[max][max],int x,int y){
    gotoxy(x, y);
    char top[12] = {'0','A','B','C','D','E','F','G','H','I','J','0'};
    for (auto &&znak : top) {
        cout<<bla<<bwhi<<znak<<' '<<nor;
    }
    for(int i=1;i<s-1;i++){
        gotoxy(x, y+i);
        cout<<bla<<bwhi<<i<<' '<<nor;
        for(int j=1;j<s-1;j++){
            gotoxy(x+(j*2), y+i);
            color(tab[i][j]);
        }
        gotoxy(x+22, y+i);
        cout<<bla<<bwhi<<i<<' '<<nor;
    }
    gotoxy(x, y+11);
    for (auto &&znak : top) {
        cout<<bla<<bwhi<<znak<<' '<<nor;
    }
}
void zeruj(int tab[12][12]){
    for(int i=0;i<12;i++){
        for(auto &&wart : tab[i]){
            wart = 0;
        }
    }
}
void losx(int tab[12][12],int n){
    bool good = false;
    int k,x,y;
    do {
        k = los(2)-1;
        x = los(7+(n-1)*k);
        y = los(10-(n-1)*k);
        good = true;
        for(int i=0;i<n;i++){
            if(tab[y+i*k][x-(k-1)*i] != 0){good = false;break;}}
    }while (good == false);
    tab[y+k*n][x+(k-1)]=5;
    tab[y-k][x-(k-1)*n]=5;
    for(int i=0;i<n;i++){
        tab[y+i*k][x-(k-1)*i]=n;
        tab[y+i*k+(k-1)][x-(k-1)*i+k]=5;
        tab[y+i*k-(k-1)][x-(k-1)*i-k]=5;
    }
}
int Kol(){
    int kol = 0;
    gotoxy(3, 15);
    cout<<"Podaj Kolumne (A...I): ";
    do{
        kol = tolower(getch());
        kol -= 96;
    }while(kol<1 or kol > 10);
    char znak = kol+64;
    gotoxy(3, 16);
    cout<<znak;
    return kol;
}
int Wier(){
    gotoxy(3, 14);
    cout<<"10 to ':'";
    int wier = 0;
    gotoxy(3, 15);
    cout<<"Podaj Wiersz (1...10): ";
    do{   
        wier = tolower(getch());
        wier -= 48;
    }while(wier<1 or wier > 10);
    int znak = wier;
    gotoxy(4, 16);
    cout<<znak;
    return wier;
}

void lost(int tab[12][12]){
    int statki[10] = {4,3,3,2,2,2,1,1,1,1};
    for (auto &&statek : statki) {
        losx(tab, statek);
    }
}
void SG(int tab[12][12]){
    int kol = Kol();
    int wier = Wier();
    if(tab[wier][kol] == 0 or tab[wier][kol] == 5){tab[wier][kol] = 7;}
    else if(tab[wier][kol] < 5 and tab[wier][kol]>0){tab[wier][kol] = 8;}
}
void SK(int tab[12][12]){
    int kol = los(10);
    int wier = los(10);
    if(tab[wier][kol] == 0 or tab[wier][kol] == 5){tab[wier][kol] = 7;}
    else if(tab[wier][kol] < 5 and tab[wier][kol]>0){tab[wier][kol] = 8;}
}
int TEST(int tab[12][12]){
    int suma = 0;
    for(int i = 1;i<11;i++){
        for(int j = 1;j<11;j++){
            if(tab[i][j] > 0 and tab[i][j]< 5){suma++;}
        }
    } 
    return suma;
}
void Komunikat(int TK[12][12],int TG[12][12],bool &losowanie,bool &re){
    int tk = TEST(TK);
    int tg = TEST(TG);
    if(tk == 0){
        losowanie = true;
        cout<<cls<<bred<<blu<<"Wygral Gracz"<<nor;
        jeszcze(re);
    }
    if(tg == 0){
        losowanie = true;
        cout<<cls<<bred<<blu<<"Wygral Komputer"<<nor;
        jeszcze(re);
    }
}
int main(){
    srand(time(NULL));
    cout<<cls;
    bool re = true;
    bool losowanie = true;
    do{
        int TG[12][12];
        int TK[12][12];
        if(losowanie){
            zeruj(TG); 
            zeruj(TK);
            lost(TG);
            lost(TK);
            plansza(TG, 3, 2);
            plansza(TK, 31, 2);
            losowanie = false;}
        gotoxy(3, 1);
        cout<<"Plansza Gracz Statki: "<<TEST(TG);
        gotoxy(31, 1);
        cout<<"Plansza Komputera Statki: "<<TEST(TK);
        SG(TK);
        SK(TG);
        plansza(TG, 3, 2);
        plansza(TK, 31, 2);
        Komunikat(TK, TG, losowanie, re);
    }while(re==true);
    return 0;
}
