from random import randint
from msvcrt import getch

normal  = "\033[0m"
black   = "\033[30m"      
red     = "\033[31m"      
green   = "\033[32m"      
yellow  = "\033[33m"      
blue    = "\033[34m"      
pirple = "\033[35m"      
cyan    = "\033[36m"      
white   = "\033[37m"
bgblack   = "\033[40m"      
bgred     = "\033[41m"      
bggreen   = "\033[42m"      
bgyellow  = "\033[43m"      
bgblue    = "\033[44m"      
bgpirple = "\033[45m"      
bgcyan    = "\033[46m"      
bgwhite   = "\033[47m"
cls = "\033[2J\033[H"
line = "\033[2K"

#def getch(char_width=1):
#    import sys, tty, termios
#    fd = sys.stdin.fileno()
#    old_settings = termios.tcgetattr(fd)
#    try:
#        tty.setraw(fd)
#        ch = sys.stdin.read(char_width)
#    finally:
#        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
#    return ch

def gotoxy(x,y):
    print(f"\x1b[{y+1};{x+1}H",end='')

def getin():
    wart ='z'
    while wart != 't' and wart != 'n':
        wart = getch().lower().decode()
    return wart

def get(re):
    key = ord(getch().lower())
    if(key == 113):
        re[0] = False
    return key

def jeszcze():
    print("jeszcze raz? (T/n)")
    if getin() != 't':
        return False
    return True

def los(x):
    return randint(1,x) 

def inputh(g):
    k = False
    x = 0
    while True:
        try:
            x = int(input(g))
            k = True
        except ValueError:
            print("wariosc nieprawidlowa")
        if k:
            break 
    return x

def color(n):
    if n == 0:
        print(cyan+bgblue+"  ",end=normal)
    elif n == 1:
        print(white+bgblack+"1 ",end=normal)
    elif n == 2:
        print(white+bgblack+"2 ",end=normal)
    elif n == 3:
        print(white+bgblack+"3 ",end=normal)
    elif n == 4:
        print(white+bgblack+"4 ",end=normal)
    elif n == 5:
        print(yellow+bgblue+"  ",end=normal)
    elif n == 7:
        print(red+bgblue+"O ",end=normal)
    elif n == 8:
        print(green+bgblue+"X ",end=normal)
    else:
        print(blue+bgblue+n,end=normal)

