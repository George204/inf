#include <iostream>
using namespace std;
int main(){
    cout<<"podaj liczbe n:";int n;cin>>n;
    int wynik;
    for(int i=1;i<10000;i++){
        int a=i%10+(i/10)%10+(i/100)%10+i/1000;
        if ((a==n)){
            cout<<i<<endl;
            wynik++;
        }    
    }
    cout<<"ilosc liczb: "<<wynik<<endl;
}