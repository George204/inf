import random as r
import os as o
import msvcrt as ms

def gotoxy(x,y):
    print(f"\x1b[{y+1};{x+1}H",end='')

def los(a):
    return r.randint(1,a)

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

def sprawdz(a,b):
    if a<b:
        return "ZA MALO"
    elif a>b:
        return 'ZA DUZO'
    else:
        return 'TO JEST TO'

def napisz(x,y,z):
    gotoxy(x,y)
    print(z)

def main():
    while True:
        o.system("cls")
        l = los(100)
        u = -1
        while u != l:
            u = inputh("podaj liczbe calkowita:")
            o.system("cls")
            napisz(0,0,sprawdz(u,l))
        print("czy chcesz powtorzyc program (T/N)")
        k = ms.getch().lower()
        if k != b't':
            break

if __name__=="__main__": 
    main()
