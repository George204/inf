#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
char o = 't';
	do{
		system("CLS");
		cout<<"ile liczb chcesz wprowadzic?:";
		bool koniec = false;
		int n;
		do{
			cin>>n;
			if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
			else{koniec = true;}
			cin.clear();cin.sync();
		}while(koniec == false);
		float suma = 0;
		koniec = false;
		int i = 1;
		do{
			cout<<"podaj liczbe nr "<<i<<": ";
			int a;cin>>a;
			if(cin.fail()){cout<<"podana wartosc nie jest liczba"<<endl;}
			else if(a>9 && a<100){
				i++;
				suma += a;
				if(i>n){koniec = true;}
			}
			else{cout<<"podana wartosc nie jest 2 cyfrowa"<<endl;}
			cin.clear();cin.sync();
		}while(koniec == false);
		cout<<fixed<<setprecision(2)<<"średnia wynosi: "<<suma/n<<endl;
		cout<<"dalej (T/N)";
		o = tolower(getch());
	}while(o=='t');
	return 0;
}
