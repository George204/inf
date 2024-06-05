#include "funk.h"
#define max 100

using namespace std;

int main(){
    srand(time(NULL));
    bool re = true;
    do {
        int n = input("Podaj n:");
        int T[max][max];
        lost2(T, n, n);
        piszt2(T, n, n);
        int x = input("Podaj x:");
        int Tx[max];
        for (int i; i<n; i++) {
            Tx[i]= T[x][i];
        }        
        int Ty[max];
        for (int i; i<n; i++) {
            Ty[i] = T[i][x];
        }
        for (int i; i<n; i++) {
            T[i][x] = Tx[i];
        }
        for (int i; i<n; i++) {
            T[x][i] = Ty[i];
        }
        piszt2(T, n, n);
        jeszcze(re);
    }while(re == true);
    return 0;
}
