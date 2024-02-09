#define max 100
#include "funk.h"

using namespace std;

void znajdz(int tab[max][max], int n, int m){
    int maxim[3] = {0,0,tab[0][0]};
    int minim[3] = {0,0,tab[0][0]};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int wart = tab[i][j]; 
            if(wart<minim[2]){
                minim[0] = i;
                minim[1] = j;
                minim[2] = wart;
            }
            if(wart>maxim[2]){
                maxim[0] = i;
                maxim[1] = j;
                maxim[2] = wart;
            }
        }
    }
    cout<<"wartosc maksymalna:"<<maxim[2]<<" index: "<<maxim[0]<<","<<maxim[1]<<endl;
    cout<<"wartosc minimalna:"<<minim[2]<<" index: "<<minim[0]<<","<<minim[1]<<endl;
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int tab[max][max];
        int kol = input("Ile kolumn: ");
        int wier = input("Ile wierszy: ");
        cout<<"podajemy ? t or n\n";
        char ans = getin();
        if(ans == 't'){
            czytajt2(tab,wier, kol);
        }
        else{
            lost2(tab, wier, kol);
        }
        piszt2(tab, wier, kol);
        znajdz(tab, wier, kol);
        jeszcze(re);
    }while(re==true);
    return 0;
}
