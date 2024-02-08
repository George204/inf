#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define max 4

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
void makew(int wspol[max][max],int wt[max][max],int wxt[max][max],int wyt[max][max], int wzt[max][max]){
    for(int i=0;i<=2;i++){
       wt[i][0] = wspol[i][0]; 
       wt[i][1] = wspol[i][1]; 
       wt[i][2] = wspol[i][2]; 
    }
    for(int i=0;i<=2;i++){
       wxt[i][0] = wspol[i][3]; 
       wxt[i][1] = wspol[i][1]; 
       wxt[i][2] = wspol[i][2]; 
    }
    for(int i=0;i<=2;i++){
       wyt[i][0] = wspol[i][0]; 
       wyt[i][1] = wspol[i][3]; 
       wyt[i][2] = wspol[i][2]; 
    }
    for(int i=0;i<=2;i++){
       wzt[i][0] = wspol[i][0]; 
       wzt[i][1] = wspol[i][1]; 
       wzt[i][2] = wspol[i][3]; 
    }
}
int trzy(int n){
    if(n>2){
        n = n-3;
    }
    return n;
}

int wyznacznik(int t[max][max]){
    int wyz = 0;
    for(int i = 0;i<=2;i++){
        int ilp = 1,ilm = 1;
        for(int j = i;j<=2+i;j++){
            ilp = ilp * t[j-i][trzy(j)];
            cout<<ilp<<endl;
            ilm = ilm * t[2-(j-i)][trzy(j)];
            cout<<ilm<<endl;
        }
        wyz = wyz + ilp - ilm;
    }    
    return wyz;
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        int wspol[max][max] = {
            {2,3,5,5},
            {-1,4,6,6},
            {3,-2,7,7}};//105
        int wt[max][max], wxt[max][max], wyt[max][max], wzt[max][max];
        piszt2(wspol, 3, 4);
        makew(wspol,wt,wxt,wyt,wzt);
        piszt2(wt, 3, 3);
        cout<<wyznacznik(wt)<<endl;
        cout<<"\njeszcze raz? (T/N)"<<endl;
        if (tolower(getch())!='t'){re = false;}
    }while(re==true);
    return 0;
}
