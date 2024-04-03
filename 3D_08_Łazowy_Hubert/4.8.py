from funk import *
max = 5

def sortt(tab):
    zmaina = 1
    while(zmaina == 1):
        zmaina = 0
        for i in range(len(tab)-1):
            if tab[i]>tab[i+1]:
                zmaina = 1
                schowek = tab[i]
                tab[i] = tab[i+1]
                tab[i+1] = schowek
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
