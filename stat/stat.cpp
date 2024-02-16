#include "funk.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void plansza(int tab[12][12],int x,int y){
    char top[12] = {'0','A','B','C','D','E','F','G','H','I','J','0'};
    for(int i = 0;i<12;i++){
        gotoxy(x+i*2, y);
        cout<<bla<<bwhi<<top[i]<<' '<<nor;
        gotoxy(x+i*2, y+11);
        cout<<bla<<bwhi<<top[i]<<' '<<nor;
    }
    for(int i=1;i<11;i++){
        gotoxy(x, y+i);
        cout<<bla<<bwhi<<"  \033[2D"<<i<<nor;
        for(int j=1;j<11;j++){
            gotoxy(x+(j*2), y+i);
            color(tab[i][j]);
        }
        gotoxy(x+22, y+i);
        cout<<bla<<bwhi<<"  \033[2D"<<i<<nor;
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
int podaj(int d, bool&re){
    int input = 0;
    if(d == 1){
        gotoxy(1, 14);
        cout<<line<<endl<<"  Podaj Kolumne (A...I): "<<endl<<line;
    }
    else{
        gotoxy(3, 14);
        cout<<"10 to ':'\n  Podaj Wiersz (1...10): ";
    }
    do {
        input = get(re);
        if(input == 113){break;}
        input -= (3-d)*48;
    }while (input<1 or input > 10);
    char znak = input + (3-d)*48;
    gotoxy(2+d, 16);
    cout<<znak;
    return input;
}
void lost(int tab[12][12]){
    int statki[10] = {4,3,3,2,2,2,1,1,1,1};
    for (auto &&statek : statki) {
        losx(tab, statek);
    }
}
void SG(int tab[12][12], bool &re){
    int kol = podaj(1,re);
    if(kol == 113){return;}
    int wier = podaj(2,re);
    if(wier == 113){return;}
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
    if(tk == tg and tk == 0){
        losowanie = true;
        cout<<cls<<bred<<blu<<"Remis"<<nor;
        jeszcze(re);
    }
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
void zapis(int tab1[12][12], int tab2[12][12]){
    fstream plik;
    plik.open("plansza.txt",ios::out);
    for(int i = 1;i<11;i++){
        for(int j = 1;j<11;j++){
            plik<<tab1[i][j]<<endl<<tab2[i][j]<<endl;
        }
    }
    plik.close();
}
void odczyt(int tab1[12][12], int tab2[12][12]){
    fstream plik;
    plik.open("plansza.txt",ios::in);
    for(int i = 1;i<11;i++){
        for(int j = 1;j<11;j++){
            plik>>tab1[i][j];
            plik>>tab2[i][j];
        }
    }
    plik.close();
}
int main(){
    int TG[12][12];
    int TK[12][12];
    srand(time(NULL));
    cout<<cls<<"\033[?25l";
    bool re = true;
    bool losowanie = true;
    fstream plik;
    cout<<"czy chesz wczytac zapis?(t/n)\n";
    if(getin()=='t'){
        plik.open("plansza.txt",ios::in);
        if(plik.is_open()){
            losowanie = false;
            odczyt(TG, TK);
            cout<<cls;
            plansza(TG, 3, 2);
            plansza(TK, 31, 2);
        }
        else{
            cout<<"nie ma pliku program zostanie zamknięty";
            getch();
            return 0;
        }
    }
    do{
        if(losowanie){
            zeruj(TG); 
            zeruj(TK);
            lost(TG);
            lost(TK);
            plansza(TG, 3, 2);
            plansza(TK, 31, 2);
            losowanie = false;}
        gotoxy(3, 1);
        cout<<line<<"Plansza Gracz Statki: "<<TEST(TG);
        gotoxy(31, 1);
        cout<<"Plansza Komputera Statki: "<<TEST(TK);
        gotoxy(3, 17);
        cout<<"Nacisznij [Q] w dowolnym momencie gry aby wyjsc z programu.";
        SG(TK,re);
        SK(TG);
        plansza(TG, 3, 2);
        plansza(TK, 31, 2);
        zapis(TG, TK);
        Komunikat(TK, TG, losowanie, re);
    }while(re==true);
    return 0;
}
