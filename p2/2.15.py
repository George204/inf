import msvcrt as m
k = b't'
while True:
    n,res = 0,1 
    while True:
        try:
            n = int(input("podaj a:"))
            if n>0:
                break
            else:
                print("liczba niedodatnia")
        except ValueError:
            print("podaj int")
    kn = int(n/2+1)
    for i in range(2,kn):
        if n%i == 0:
            res = 0
            break
    if res == 1:
        print("liczba pierwsza")
    else:
        print("liczba nie pierwsza")
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break
