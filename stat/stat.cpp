#include "funk.h"
#include <stdlib.h>
#define max 12
using namespace std;
int s = 12;

void plansza(int tab[max][max],int x,int y){
    gotoxy(x, y);
    char top[12] = {'0','A','B','C','D','E','F','G','H','J','K','0'};
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
void lost(int tab[12][12]){
    int statki[10] = {4,3,3,2,2,2,1,1,1,1};
    for (auto &&statek : statki) {
        losx(tab, statek);
    }
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int TG[12][12];
        int TK[12][12];
        zeruj(TG); 
        zeruj(TK);
        lost(TG);
        lost(TK);
        plansza(TG, 3, 2);
        plansza(TK, 31, 2);
        jeszcze(re);
    }while(re==true);
    return 0;
}
