#include "funk.h"
#define max 100
using namespace std;

string sprczyw(int n,int tab[max] ,int size){
    for(int i=0;i<size;i++){
        if( tab[i] == n){return "tak";}
    }
    return "nie";

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
        int szuk = input("jako liczbe chcesz sprawdzic?: ");
        cout<<"czy jest:"<<sprczyw(szuk,tab,size);
        jeszcze(re);
    }while(re==true);
    return 0;
}
