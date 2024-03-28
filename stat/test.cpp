#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main () {
    fstream plik;
    plik.open("test.txt",ios::in);
    if(plik.is_open()){cout<<"plik istnieje";}
    else{cout<<"plik nie istnieje";}
    getch();
    return 0;
}
