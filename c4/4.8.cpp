#define max 100
#include "funk.h"

using namespace std;


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
        jeszcze(re);
    }while(re==true);
    return 0;
}
