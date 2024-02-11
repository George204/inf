from random import randint

from msvcrt import getch

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

def getin():
    wart =b'z'
    while wart != b't' and wart != b'n':
        wart = getch().lower()
    return wart

def jeszcze():
    print("jeszcze raz? (T/n)")
    if getin() != b't':
        return False
    return True

def los(x):
    return randint(0,x) 

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

def piszt(tab,n):
    print("Elementy Tablicy:",end="")
    for i in range(0,n):
        print(F"{tab[i]},",end="")
    print()

def czytajt(tab,n):
    for i in range(0,n):
        x = inputh(f"elemnt nr {i+1}:")
        tab[i] = x;

def lost(tab,n):
    for i in range(0,n):
        tab[i] = los(9)

def piszt2(tab, n, m):
    for i in range(0,n):
        print(f"Elementy {i} wiersza: ",end="")
        for j in range(0,m):
            print(F"{tab[i][j]},",end="")
        print()

def czytajt2(tab,n, m):
    for i in range(0,n):
        for j in range(0,m):
            x = inputh(f"elemnt ({i+1},{j+1}):")
            tab[i][j] = x; 

def lost2(tab,n, m):
    for i in range(0,n):
        buff = [0]*m
        lost(buff,m)
        tab[i] = buff

