from funk import *
max = 5

def makew(wspol):
    wt = [[0,0,0],[0,0,0],[0,0,0]]
    wxt = [[0,0,0],[0,0,0],[0,0,0]]
    wyt = [[0,0,0],[0,0,0],[0,0,0]]
    wzt = [[0,0,0],[0,0,0],[0,0,0]]
    for i in range(3):
        wt[i][0] = wspol[i][0]
        wt[i][1] = wspol[i][1]
        wt[i][2] = wspol[i][2]
    for i in range(3):
        wxt[i][0] = wspol[i][3]
        wxt[i][1] = wspol[i][1]
        wxt[i][2] = wspol[i][2]
    for i in range(3):
        wyt[i][0] = wspol[i][0]
        wyt[i][1] = wspol[i][3]
        wyt[i][2] = wspol[i][2]
    for i in range(3):
        wzt[i][0] = wspol[i][0]
        wzt[i][1] = wspol[i][1]
        wzt[i][2] = wspol[i][3]
    return wt,wxt,wyt,wzt

def trzy(n):
    if n>2:
        return n-3
    return n

def wyznacznik(tab):
    wyz = 0
    for i in range(3):
        ilp,ilm = 1,1
        for j in range(i,i+3):
            ilp = ilp * tab[j-i][trzy(j)]
            ilm = ilm * tab[2-(j-i)][trzy(j)]
        wyz += ilp - ilm
    return wyz

def main():
    re = True
    while re == True:
        wspol = [
            [1,3,2,7],
            [7,4,9,15],
            [5,6,8,17]]
        wyzt = makew(wspol)
        wyz = []
        for i in wyzt:
            wyz.append(wyznacznik(i))
        if wyz[0] == 0:
            if wyz[1] and wyz[2] and wyz[3]:
                print("nieskonczenie wiele rozwionzan")
            else:
                print("brak rozwionzan")
        else:
            print(f"x = {wyz[1]/wyz[0]}")
            print(f"y = {wyz[2]/wyz[0]}")
            print(f"z = {wyz[3]/wyz[0]}")
        re = jeszcze()

if __name__ == "__main__":
    main()

