#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#define input do{cout<<"podaj "<<"n"<<": ";cin>>n;if(cin.fail()){cout<<"podana wartość nie jest prawidłowa"<<endl;}else{if(n<1){cout<<"liczba niedodatnia"<<endl;}else{k=1;}}cin.clear();cin.sync();}while(k==0);
using namespace std;

int main(){
    bool re = true;
    do{
        int n = 0, k = 0;long long c = 1;
        input;
        
        if(n>2){
            long long a = 1;long long b = 1;
            for(int i = 3; i <= n; i++){
                c = a + b;
                a = b;
                b = c;
            }
        }
        cout<<c<<endl;
        cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}