#include "funk.h"
#define max 4

using namespace std;

void makew(int wspol[maxx][maxx],int wt[max][max],int wxt[max][max],int wyt[max][max], int wzt[max][max]){
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
float wyznacznik(int t[max][max]){
    int wyz = 0;
    for(int i = 0;i<=2;i++){
        int ilp = 1,ilm = 1;
        for(int j = i;j<=2+i;j++){
            ilp = ilp * t[j-i][trzy(j)];
            ilm = ilm * t[2-(j-i)][trzy(j)];
        }
        wyz = wyz + ilp - ilm;
    }    
    return wyz;
}
int main(){
    srand(time(NULL));
    bool re = true;
    do{
        // int wspol[max][max] = {
        //     {1,3,2,7},
        //     {7,4,9,15},
        //     {5,6,8,17}};
        int wspol[100][100];
        czytajt2(wspol,3, 4);
        int wt[max][max], wxt[max][max], wyt[max][max], wzt[max][max];
        makew(wspol,wt,wxt,wyt,wzt);
        float wyz[4] = {wyznacznik(wt),wyznacznik(wxt),wyznacznik(wyt),wyznacznik(wzt)};
        if(wyz[0] == 0){
            if(wyz[1] == 0 and wyz[2] == 0 and wyz [3] == 0){
                cout<<"nieskonczenie wiele rozwionzan";
            }
            else{
                cout<<"brak zrowiązań";
            }
        }
        else{
            cout<<"x = "<<wyz[1]/wyz[0]<<endl;
            cout<<"y = "<<wyz[2]/wyz[0]<<endl;
            cout<<"z = "<<wyz[3]/wyz[0]<<endl;
        }
        jeszcze(re);
    }while(re==true);
    return 0;
}
