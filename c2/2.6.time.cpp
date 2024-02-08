#include <iostream>
using namespace std;
int main(){
    for(int n=1;n<=27;n++){	
    	int wynik = 0;
	    for(int i=100;i<1000;i++){
	        int a=i%10+(i/10)%10+i/100;
	        if ((a==n)){
	            wynik++;
	        }    
	    }
    cout<<wynik<<endl;
	}
}

