#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#define input do{cout<<"podaj "<<"n"<<": ";cin>>n;if(cin.fail()){cout<<"podana wartość nie jest prawidłowa"<<endl;}else{if(n<1){cout<<"liczba niedodatnia"<<endl;}else{k=1;}}cin.clear();cin.sync();}while(k==0);
using namespace std;

int main(){
    bool re = true;
    do{
        int n = 0, k=0;
        input;
        unsigned long long out = (pow((1+sqrt(5))/2,n)-pow((1-(1+sqrt(5))/2),n))/sqrt(5);
        cout<<out<<endl;
        cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}