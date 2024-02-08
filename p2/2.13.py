import msvcrt as m
k = b't'
while True:
    n,s=0,1
    while True:
        try:
            n = int(input("podaj n:"))
            if n>=0:
                break
            else:
                print("podaj liczba jest ujemna")
        except ValueError:
            print("podaj int")
    if n == 0:
        s=0
    for i in range(1,n+1):
        s = s*i
    print(f"silnia {n} = {s}")
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break
