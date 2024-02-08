#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
#define input do{cout<<"podaj "<<"n"<<": ";cin>>n;if(cin.fail()){cout<<"podana wartość nie jest prawidłowa"<<endl;}else{if(n<1){cout<<"liczba niedodatnia"<<endl;}else{k=1;}}cin.clear();cin.sync();}while(k==0);
using namespace std;

int main(){
    bool re = true;
    do{
        int n = 0, k = 0,sum = 0;
        input;
        while(n>0){
            sum += n%10;
            n = n/10;
        }
        cout<<"suma cyfr wynosi: "<<sum<<endl;
        cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}