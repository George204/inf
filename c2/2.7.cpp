#include <iostream>
#include <conio.h>
using namespace std;

int main(){
char o = 't';
    do{
    	system("CLS");
        cout<<"podaj liczbe n:";int n;cin>>n;
        int wynik;
        for(int i=100;i<1000;i++){
            int a=i%10+(i/10)%10+i/100;
            if ((a==n)){
                cout<<i<<endl;
                wynik++;
            }    
        }
        cout<<"ilosc liczb: "<<wynik<<endl;
        cout<<"czy chesz powturzyæ program T/N";
		o = tolower(getch());
    }
    while(o == 't');
return 0;
}
