import msvcrt as m
k = b'n'
while True:
    n = 0
    while True:
        try:
            n = int(input("podaj wartosc n:"))
            break
        except ValueError:
            print("podaj int")
    print(int((1.618033988749895**n-(1-1.618033988749895)**n)/2.23606797749979))
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break