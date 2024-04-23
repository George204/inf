from funk import *
top = ['0','A','B','C','D','E','F','G','H','I','J','0']

def plansza(tab,x,y):
    for i in range(12):
        gotoxy(x+i*2,y)
        print(green+bgwhite+top[i]+" ",end=normal)
        gotoxy(x+i*2, y+11)
        print(red+bgwhite+top[i]+" ",end=normal)
    for i in range(1,11):
        gotoxy(x,y+i)
        print(black+bgwhite+"  \033[2D"+str(i),end=normal)
        for j in range(1,11):
            gotoxy(x+(j*2),y+i)
            color(tab[i][j])
        gotoxy(x+22,y+i)
        print(black+bgwhite+"  \033[2D"+str(i),end=normal)

def zeruj(tab):
    for i in range(12):
        for j in tab[i]:
            j=0

def losx(tab,n):
    good = False
    k,x,y = 0,0,0
    while(good == False):
        k = los(2)-1
        x = los(7+(n-1)*k)
        y = los(10-(n-1)*k)
        for i in range(n):
            if tab[y+i*k][x-(k-1)*i] != 0:
                good = False
    for i in range(-1,n+1):
        tab[y+i*k][x-(k-1)*i]=n
        tab[y+i*k+(k-1)][x-(k-1)*i+k]=5
        tab[y+i*k-(k-1)][x-(k-1)*i-k]=5
    tab[y+k*n][x+(k-1)]=5
    tab[y-k][x-(k-1)*n]=5

tablica = [
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0], 
    [0,0,0,0,0,5,1,2,3,4,0,0] 
]
plansza(tablica,1,1)
