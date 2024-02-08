#include <iostream>
using namespace std;
int main() {
    cout<<"a:";int a;cin>>a;
    cout<<"b:";int b;cin>>b;
    cout<<"c:";int c;cin>>c;
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            count++;
			cout<<(i)<<",";} 
    }
    cout<<endl<<count<<" liczb z przedzialu ["<<a<<","<<b<<"] jest podzielne przez "<<c<<endl;
    getchar();
    return 0;
}
