#include <iostream>
#include <iomanip>
#include <conio.h>
#define input do{cout<<"podaj "<<"n"<<": ";cin>>n;if(cin.fail()){cout<<"podana wartość nie jest prawidłowa"<<endl;}else{if(n<0){cout<<"liczba ujemna"<<endl;}else{k=1;}}cin.clear();cin.sync();}while(k==0);

using namespace std;

int main(){
    bool re = false;
    do{
        system("cls");
        int n = 0,k = 0,s=1;
    	input;
        if(n!=0){
        for(int i=1;i<=n;i++){
            s = s*i;
        }}
        cout<<"silnia = "<<s<<endl;
        //ndk
        cout<<"jeszcze raz? (T/N)";
        if (tolower(getch())=='t'){re = true;}
        else {re = false;}
    }while(re==true);
    return 0;
}