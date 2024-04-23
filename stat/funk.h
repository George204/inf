#include <cctype>
#include <cstdlib>
#include <iostream>
//#include <conio.h>
#include <string>
#include <ctime>
#define maxx 12
#include <termios.h> 
#include <unistd.h> 
#include <stdio.h> 
#define normal   "\033[0m"
#define black   "\033[30m"      
#define red     "\033[31m"      
#define green   "\033[32m"      
#define yellow  "\033[33m"      
#define blue    "\033[34m"      
#define pirple "\033[35m"      
#define cyan    "\033[36m"      
#define white   "\033[37m"
#define bgblack   "\033[40m"      
#define bgred     "\033[41m"      
#define bggreen   "\033[42m"      
#define bgyellow  "\033[43m"      
#define bgblue    "\033[44m"      
#define bgpirple "\033[45m"      
#define bgcyan    "\033[46m"      
#define bgwhite   "\033[47m"
#define cls "\033[2J\033[H"
#define line "\033[2K"
using namespace std;

int getch(void) 
{ 
    struct termios oldattr, newattr; 
    int ch; 
    tcgetattr(STDIN_FILENO, &oldattr); 
    newattr = oldattr; 
    newattr.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr); 
    ch = getchar(); 
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr); 
    return ch; 
}
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
            cout<<cyan<<bgblue<<"  "<<normal;
            break;
        case 1:
            cout<<white<<bgblack<<"1 "<<normal;
            break;
        case 2:
            cout<<white<<bgblack<<"2 "<<normal;
            break;
        case 3:
            cout<<white<<bgblack<<"3 "<<normal;
            break;
        case 4:
            cout<<white<<bgblack<<"4 "<<normal;
            break;
        case 5:
            cout<<yellow<<bgblue<<"  "<<normal;
            break;
        case 7:
            cout<<red<<bgblue<<"O "<<normal;
            break;
        case 8:
            cout<<green<<bgblue<<"X "<<normal;
            break;
        default:
            cout<<blue<<bgblue<<n<<normal;
            break;
    }
}
