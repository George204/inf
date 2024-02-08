import msvcrt as m
k = b'n'
while True:
    a,b = 0,0
    p = 1
    while True:
        try:
            if p == 1:
                a = int(input("podaj a:"))
                p += 1
            if p == 2:
                b = int(input("podaj b:"))  
                break
        except ValueError:
            print("podaj int")
    x,y,r = a,b,0
    while True:
        r = x%y
        if r == 0:
            print(f"NWD:{y}")
        x,y = y,r
        if r == 0:
            break
    print(f"NWW:{a*b/x:.0f}")
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break