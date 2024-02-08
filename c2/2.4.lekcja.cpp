#include <iostream>
using namespace std;
int main() {
	int a;cout<<"A:";cin>>a;
    int b;cout<<"B:";cin>>b;
	int c;cout<<"C:";cin>>c;
	int z = b-a;
	int liczby = 0;
	int i = 0;
	for(i;i<z;i++)
	{
		if ((a+i)%c==0){liczby++;cout<<(a+i)<<",";}
	}
	cout<<endl<<"w zakresie jest "<<liczby<<" liczby podzielnych przez "<<c;
	return 0;
}
