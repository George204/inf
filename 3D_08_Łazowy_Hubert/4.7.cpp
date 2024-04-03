#include <iomanip>
#define max 100
#include "funk.h"

using namespace std;

bool pierw(int n){
    bool out = true;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){out = false;break;}
    }
    return out;
}
void znajdz(int tab[max][max], int n, int m){
    int suma = 0;
    float il = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int wart = tab[i][j];    
            if(pierw(wart)){
                cout<<"("<<i<<","<<j<<") "<<wart<<" jest pierwsza\n";
                suma = suma + wart;
                il++;
            }
        }
    }
    cout<<fixed<<setprecision(2)<<"suma: "<<suma<<"\nsrednia: "<<suma/il;
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
