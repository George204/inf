import random as r
import os as o
import msvcrt as ms

def gotoxy(x,y):
    print(f"\x1b[{y+1};{x+1}H",end='')

def gwiazdki(x,y,n):
    gotoxy(x,y)
    for i in range(n):
        print("*",end='')
    print()

def los(a):
    return r.randint(1,a)

def wyswietl(g1,g2,k):
    print("g1:\ng2:\nk :")
    gwiazdki(3,0,g1)
    gwiazdki(3,1,g2)
    gwiazdki(3,2,k)

def sprawdz(k,g1,g2,o1,o2):
    if(g1>k):
        o1 = 2
    if(g2>k):
        o2 = 2
    if(o1==0 and g1 > g2):
        o2 = 1
    if(o2==0 and g2 > g1):
        o1 = 1
    if(o1 == 0 and o2 == 0):
        o1,o2 = 3,3
    return o1,o2

def komentarz(x,y,n):
    gotoxy(x,y)
    comment = ["JESTES SUPER!","SMIALEJ!","NIE PRZESADZAJ!","OJEJ!"]
    print(comment[n])

def pytaj(x,y,maxx,g):
    o.system("cls")
    gotoxy(x,y)
    while True:
        try:
            l = int(input(f"Gracz {g} podaj liczbe od 1 do {maxx}:"))
            if 0<l and l<50:
                break
            else:
                print("liczba poza zakresem")
        except ValueError:
            print("wartosc nieprawidlowa")
    return l

def kto_wygral(o1,o2):
    if o1 == 0:
        return "gracz 1"
    elif o2 == 0:
        return "gracz 2"
    elif o1 == o2 and o2 == 3:
        return "remis"
    else:
        return "nikt"

def main():
    while True:
        o.system("cls")
        k = los(50)
        g1,g2,o1,o2 = 0,0,0,0
        g1 = pytaj(0,0,50,'1')
        g2 = pytaj(0,0,50,'2')
        o.system("cls")
        wyswietl(g1,g2,k)
        o1,o2 = sprawdz(k,g1,g2,o1,o2)
        print("g1:\ng2:")
        komentarz(3,3,o1)
        komentarz(3,4,o2)
        print(f"wygral {kto_wygral(o1,o2)}")
        print("czy chcesz powtorzyc program (T/N)")
        k = ms.getch().lower()
        if k != b't':
            break

if __name__=="__main__": 
    main()
