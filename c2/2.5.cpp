#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"ile liczb chcesz wprowadzic?"<<endl;
    int n;cin>>n;
    float suma = 0;
    for(int i=0;i<n;i++){
        cout<<"podaj liczbe nr "<<i+1<<": ";
        float a;cin>>a; suma += a;}
    cout<<fixed<<setprecision(2)<<"średnia wynosi: "<<suma/n<<endl;
    getchar();
    return 0;
}