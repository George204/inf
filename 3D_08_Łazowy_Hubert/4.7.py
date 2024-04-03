from funk import *
max = 5

def pierw(n):
    for i in range(2,int(n/2+1)):
        if n%i == 0:
            return False
    return True

def znajdz(tab, n, m):
    suma = 0
    il = 0
    for i in range(n):
        for j in range(m):
            wart = tab[i][j]
            if pierw(wart):
                print(f"({i},{j}) {wart} jest pierwsza")
                suma += wart
                il += 1
    print(f"suma: {suma}\nsrednia: {suma/il:.2f}")

def main():
    re = True
    while re == True:
        kol  = inputh("Ile kolumn: ")
        wier = inputh("Ile wierszy: ")
        tab = [[0,]*kol]*wier
        print("podajemy ? (T/N)")
        ans = getin()
        if ans == b't':
            czytajt2(tab,wier,kol)
        else:
            lost2(tab,wier,kol)
        piszt2(tab,wier,kol)
        znajdz(tab,wier,kol)    
        re = jeszcze()

if __name__ == "__main__":
    main()

