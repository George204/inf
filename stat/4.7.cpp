#include <iostream>
#include <windows.h>

#include <ctime>
// #include <cstdlib>
// #include <conio.h>

using namespace std;

const int maxs = 100;
#include "func_2wT.cpp"

int input(string n)
{
    int a;
    while(true)
    {
        cout<<endl<<n;
        cin.clear();cin.sync();cin>>a;
        if(cin.good()){return a;}
        cout<<"zla wartosc"<<endl;
    }
}
int input(string n,int max)
{
    int a; 
    while(true)
    {
        cout<<endl<<n;
        cin.clear();cin.sync();cin>>a;
        if(cin.good()&& a<=max&&a>=0){return a;}
        cout<<"zla wartosc"<<endl;
    }
}

int main(){
    srand(time(NULL));
    cout<<endl<<"Witam w zadaniu 4.6"<<endl;
    char d;
    int n;
    int m;
    int l;
    int p;
    int i;
    int ii;
    int P[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int pos[4];
    int sum;
    int num;

    string odp;
    while(true)
    {
        n=input("rozmiar tablicy x:",100);
        m=input("rozmiar tablicy y:",100);
        int tab[n][maxs];
        l=input("Los czy nie\n1.los\n2.uzytkownik podaje\n",2);
        if(l==1){lost2(tab,n,m);}
        else if(l==2){czytajt2(tab,n,m);}
        else{cout<<"cos poszlo nie tak"<<endl;}

    piszt2(tab,n,m);
        sum=0;
        num=0;
        i=0;
        while (i<n)
        {
            ii=0;
            while (ii<m)
            {
                for(int iii=0;iii<25;iii++)
                {
                    if(tab[i][ii]==P[iii]){cout<<P[iii]<<":("<<i<<":"<<ii<<")"<<endl;sum=sum+P[iii];num++;break;}
                }
                ii++;
            }
            i++;
        }
        if(num==0){cout<<"nie ma liczb pierwszych"}



        cout<<"jeszcze raz? T/N: ";
        do{cin.clear();cin.sync();cin>>d;d=toupper(d);
            if(d=='N'){return 0;}
        else if(d=='T'){break;}
            else{cout<<"podana wartartość jest nie poprawna. Ponów prubu"<<endl;}
        }while(true);
    }
    cin.get();
    return 0;
}   
