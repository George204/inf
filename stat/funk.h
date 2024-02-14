#include <cctype>
#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime>
#define maxx 12
//#include <termios.h> 
//#include <unistd.h> 
//#include <stdio.h> 
#define nor   "\033[0m"
#define bla   "\033[30m"      
#define red     "\033[31m"      
#define gre   "\033[32m"      
#define yel  "\033[33m"      
#define blu    "\033[34m"      
#define pir "\033[35m"      
#define cya    "\033[36m"      
#define whi   "\033[37m"
#define bbla   "\033[40m"      
#define bred     "\033[41m"      
#define bgre   "\033[42m"      
#define byel  "\033[43m"      
#define bblu    "\033[44m"      
#define bpir "\033[45m"      
#define bcya    "\033[46m"      
#define bwhi   "\033[47m"
#define cls "\033[2J\033[H"
#define line "\033[2K"
using namespace std;
//
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
void gotoxy(int x, int y)
{    
    printf("%c[%d;%df",0x1B,y,x);
}
char getin(){
    char wart = 'z';
    do{
        wart = tolower(getch());
    }while(wart != 't' and wart != 'n');
    return wart;
}
int get(bool &re){
    int key = tolower(getch());
    if(key == 113){re = false;}
    return key;
}
void jeszcze(bool &re){
    cout<<"\njeszcze raz? (T/N)"<<endl;
    if (getin()!='t'){re = false;}
    else {system("cls");}
}
int los(int x){
	int r=1+rand()%(x);
	return r;
}
void color(int n){
    switch (n) {
        case 0:
            cout<<cya<<bblu<<"  "<<nor;
            break;
        case 1:
            cout<<whi<<bbla<<"1 "<<nor;
            break;
        case 2:
            cout<<whi<<bbla<<"2 "<<nor;
            break;
        case 3:
            cout<<whi<<bbla<<"3 "<<nor;
            break;
        case 4:
            cout<<whi<<bbla<<"4 "<<nor;
            break;
        case 5:
            cout<<yel<<bblu<<"  "<<nor;
            break;
        case 7:
            cout<<red<<bblu<<"O "<<nor;
            break;
        case 8:
            cout<<gre<<bblu<<"X "<<nor;
            break;
        default:
            cout<<blu<<bblu<<n<<nor;
            break;
    }
}
