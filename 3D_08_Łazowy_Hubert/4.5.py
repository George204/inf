from funk import *
max = 5

def sprczyw(tab, size):
    conv = set(tab)
    if len(conv) < size:
        return "Tak"
    return "Nie"

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
        print(f"czy sie powetarza:{sprczyw(tab,size)}")
        re = jeszcze()

if __name__ == "__main__":
    main()

