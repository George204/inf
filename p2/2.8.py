import msvcrt as m
k = b'n'
while True:
    n = 0
    while True:
        try:
            n = int(input("ile liczb wprowadzic:"))
            break
        except ValueError:
            print("podaj int")
    suma = 0
    for i in range(n):
        while True:
            try:
                x = int(input("podaj liczbe:"))
                if 9<x and x<100:
                    suma += x
                    break
                else:
                    print("podaj liczbe dwócyfrowa dodatnia")
            except ValueError:
                print("podaj int")
    print(f"srednia liczb:{suma/n:.2f}")
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break