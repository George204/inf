#include <iomanip>
#include <ios>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define max 100

//#include <termios.h> 
//#include <unistd.h> 
//#include <stdio.h> 

using namespace std;

//int getch(void) 
//{ 
//    struct termios oldattr, newattr; 
//    int ch; 
//    tcgetattr(STDIN_FILENO, &oldattr); 
//    newattr = oldattr; 
//    newattr.c_lflag &= ~(ICANON | ECHO); 
//    tcsetattr(STDIN_FILENO, TCSANOW, &newattr); 
//    ch = getchar(); 
//    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); 
//    return ch; 
//}
int los(int x){
	int r=1+rand()%(x);
	return r;
}
int input(string g){
	bool k = false;
	int x = 0;
	do{
		cout<<g;cin>>x;
		if(cin.fail()){cout<<"wartosc nieprawidlowa\n";}
		else{k = true;}
		cin.clear();cin.sync();
	}while(k==false);
	return x;
}
void piszt2(int tab[max][max],int n,int m){
    for(int i=0;i<n;i++){
        cout<<"Elementy "<<i<<" wirsza: ";
        for(int j=0;j<m;j++){
            cout<<tab[i][j]<<",";
        }
        cout<<endl;
    }
}
void czytajt2(int tab[max][max], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            string pyt = "Podaj element "+to_string(i)+","+to_string(j)+":";
            int x = input(pyt);
            tab[i][j] = x;
        }
    }
}
void lost2(int tab[max][max], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            tab[i][j]=los(9);    
        }    
    }
}
char getin(){
    char wart = 'z';
    do{
        wart = tolower(getch());
    }while(wart != 't' and wart != 'n');
    return wart;
}
//2.15.cpp
bool pierw(int n){
    bool out = true;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0){out = false;break;}
    }
    return out;
}
void znajdz(int tab[max][max], int n, int m){
    int suma = 0;
    float il = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int wart = tab[i][j];    
            if(pierw(wart)){
                cout<<"("<<i<<","<<j<<") "<<wart<<" jest pierwsza\n";
                suma = suma + wart;
                il++;
            }
        }
    }
    cout<<fixed<<setprecision(2)<<"suma: "<<suma<<"\nsrednia: "<<suma/il;
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int tab[max][max];
        int kol = input("Ile kolumn: ");
        int wier = input("Ile wierszy: ");
        cout<<"podajemy ? t or n\n";
        char ans = getin();
        if(ans == 't'){
            czytajt2(tab,wier, kol);
        }
        else{
            lost2(tab, wier, kol);
        }
        piszt2(tab, wier, kol);
        znajdz(tab, wier, kol);
        cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
