from funk import *
max = 5

def sortt(tab):
    return sorted(tab)

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
        tab = sortt(tab)
        piszt(tab,size)
        re = jeszcze()

if __name__ == "__main__":
    main()

