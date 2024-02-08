import random as r
import os as o
import msvcrt as ms
from sprawdz import sprawdz
def inputh(n):
    while True:
        try:
            x = int(input(f"Gracz {n} podaj liczbe:"))
            if 0<x and x<50:
                break
            else:
                print("liczba poza zakresem")
        except ValueError:
            print("wartosc nieprawidlowa")
    return x

def gotoxy(x,y):
    print(f"\x1b[{y+1};{x+1}H",end='')

def gwiazdki(x,y,n):
    gotoxy(x,y)
    for i in range(n):
        print("*",end='')
    print()

def los(a,b):
    return r.randint(1,50)

def wyswietl(g1,g2,k):
    print("g1:\ng2:\nk :")
    gwiazdki(3,0,g1)
    gwiazdki(3,1,g2)
    gwiazdki(3,2,k)

def komentarz(x,y,n):
    gotoxy(x,y)
    comment = ["JESTES SUPER!","SMIALEJ!","NIE PRZESADZAJ!","OJEJ!"]
    print(comment[n])

def main(): 
    while True:
        o.system("cls")
        k = los(1,50)
        g1,g2,o1,o2 = 0,0,0,0
        g1 = inputh('1')
        o.system("cls")
        g2 = inputh('2')
        o.system("cls")
        wyswietl(g1,g2,k)
        o1,o2 = sprawdz(k,g1,g2,o1,o2)
        print("g1:\ng2:")
        komentarz(3,3,o1)
        komentarz(3,4,o2)
        print("czy chcesz powtorzyc program (T/N)")
        k = ms.getch().lower()
        if k != b't':
            break
  
if __name__=="__main__": 
    main()
