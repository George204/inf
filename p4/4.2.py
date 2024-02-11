from funk import *
max = 5

def sprczyw(n, tab, size):
    for i in range(size):
        if tab[i] == n:
            return "tak"
    return "nie"

def main():
    re = True
    while re == True:
        size = inputh("Jaki ma być rozmiar tablicy:")
        tab = [0,]*size
        print("podajemy ? (T/N)")
        ans = getin()
        if ans == b't':
            czytajt(tab,size)
        else:
            lost(tab,size)
        piszt(tab,size)
        szuk = inputh("jako liczbe chcesz sprawdzic?:")
        print(f"czy jest:{sprczyw(szuk,tab,size)}")
        re = jeszcze()

if __name__ == "__main__":
    main()

