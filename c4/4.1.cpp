#include "funk.h"
#define max 100
using namespace std;

int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int size = input("Ile elementow chcesz podac:");        
        int tab[max];
        czytajt(tab, size);
        piszt(tab, size);
        cout<<"Twoje liczby odwrotnie to: ";
        for(int i=0;i<size;i++){
            cout<<tab[size-i-1]<<" ";
        }
        jeszcze(re);
    }while(re==true);
    return 0;
}
