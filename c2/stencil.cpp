#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main(){
    bool re = false;
    do{
        system("cls");
        cout<<"cześć"<<endl;
        //ndk
        cout<<"jeszcze raz? (T/N)";
        if (tolower(getch())=='t'){re = true;}
        else {re = false;}
    }while(re==true);
    return 0;
}