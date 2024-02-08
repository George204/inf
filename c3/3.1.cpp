#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>
using namespace std;
void input(int &x,char s){
	bool k = false;
	do{
		cout<<"podaj "<<s<<":";cin>>x;
		if(cin.fail()){cout<<"podana wartosc nie jest prawidlowa\n";}
		else{k = true;}
		cin.clear();cin.sync();
	}while(k==false);
}
void RL(int a,int b){
	if(a==0){
		if(b==0){cout<<"rownanie tozszamoociowe";}
		else {if (b!=0){cout<<"rownanie sprzeczne";}}}
	else{cout<<"x="<<((-b)/a);}
}
void RK(int a,int b,int c){
	float delta = pow(b,2)-(4*a*c);
	if(delta == 0){
		float x = (-1*b)/(2*a);
		cout<<"x:"<<x;
	}
	else if(delta > 0){
		float x1 = (-b-sqrt(delta))/(2*a);
		float x2 = (-b+sqrt(delta))/(2*a);
		cout<<"x1:"<<x1<<"\nx2:"<<x2; }
	else {if (delta < 0){cout<<"brak rozwi1zan";}}
}
int main(){
    bool re = true;
    do{
        int a=0,b=0,c=0,d=0;
        input(a,'a');
        input(b,'b');
        input(c,'c');
        input(d,'d');
        c = c-d;
        if(a==0){RL(b,c);}
        else{RK(a,b,c);}
        cout<<"jeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
