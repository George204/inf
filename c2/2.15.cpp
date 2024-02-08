#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#define input do{cout<<"podaj "<<"n"<<": ";cin>>n;if(cin.fail()){cout<<"podana wartość nie jest prawidłowa"<<endl;}else{if(n<1){cout<<"liczba niedodatnia"<<endl;}else{k=1;}}cin.clear();cin.sync();}while(k==0);
using namespace std;

int main(){
    bool re = true;
    do{
        int n = 0, k = 0,res = 1;
        input;
        int kn = n/2+1;
        for(int i=2;i<kn;i++){
            if(n%i==0){res=0;break;}
        }
        if(res==1){cout<<"liczba pierwsza"<<endl;}
        else{cout<<"liczba nie pierwsza"<<endl;}
        cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}