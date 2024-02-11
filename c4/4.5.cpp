#include "funk.h"
#define max 100

using namespace std;

string sprczyw(int tab[max] ,int size){
    for(int i=0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if( tab[i] == tab[j] ){return "Tak";}
        }
    }
    return "Nie";
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
        cout<<"\nCzy sie powtarza: "<<sprczyw(tab,size);
        jeszcze(re);
    }while(re==true);
    return 0;
}
