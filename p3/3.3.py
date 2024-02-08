import os as o
import msvcrt as ms

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

def getin(m):
    wart = 0
    while wart == 0:
        wart = int(ms.getch().lower())
        if wart<1 or wart>m:
            wart = 0
    return wart

def sil_i():
    s=1
    n = inputh("podaj n:")
    if n == 0:
        s=0
    for i in range(1,n+1):
        s = s*i
    print(f"silnia {n} = {s}")
    
def sil_r(n):
    if n == 0:
        return 1
    return n*sil_r(n-1)

def nwd_i():
    x = inputh("podaj x:")
    y = inputh("podaj y:")
    r = 0 
    while True:
        r = x%y
        if r == 0:
            print(f"NWD:{y}")
        x,y = y,r
        if r == 0:
            break
        
def nwd_r(a,b):
    if b == 0:
        return a
    return nwd_r(b,a%b)
    
def fib_i():
    n = inputh("podaj n:")
    print(int((1.618033988749895**n-(1-1.618033988749895)**n)/2.23606797749979))

def fib_r(n):
    if n<= 2:
        return 1
    return fib_r(n-1)+fib_r(n-2)

def menu():
    opcje = ["1.silnia","2.NWD","3.n_fibonaccie","1.interacyjnie","2.rekurencyjnie"]
    for i in range(0,3):
        print(opcje[i])
    oo = 10*getin(3)
    for i in range(3,5):
        print(opcje[i])
    oo += getin(2)
    match(oo):
        case 11:
            sil_i()
        case 12:
            n = inputh("podaj n:")
            print(f"silnia z n:{sil_r(n)}")
        case 21:
            nwd_i()
        case 22:
            a = inputh("podaj a:")
            b = inputh("podaj b:")
            print(f"nwd:{nwd_r(a,b)}")
        case 31:
            fib_i()
        case 32:
            n = inputh("podaj n:")
            print(f"n-ty wyraz ciagu fibonacciego:{fib_r(n)}")
            
def main():
    while True:
        o.system("cls")
        menu()
        print("czy chcesz powtorzyc program (T/N)")
        k = ms.getch().lower()
        if k != b't':
            break
if __name__=="__main__": 
    main()