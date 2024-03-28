from funk import *
max = 5

def znajdz(tab, n, m):
    maxim = (0,0,tab[0][0])
    minim = (0,0,tab[0][0])
    for i in range(n):
        for j in range(m):
            wart = tab[i][j]
            if wart < minim[2]:
                minim = (i,j,wart)
            if wart > maxim[2]:
                maxim = (i,j,wart)
    print(f"wartosc maksymalna:{maxim[2]} index: ({maxim[0]},{maxim[1]})")
    print(f"wartosc minimalna:{minim[2]} index: ({minim[0]},{minim[1]})")

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

