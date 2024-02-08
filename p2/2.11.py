import msvcrt as m
kb = 0
k = b't'
while True:
    n = 100
    while kb != 1:
        try:
            x = int(input("podaj liczbe: "))
            if x == 0:
                if n == 100:
                    print("nie podano zadnej wartosc")
                else:
                    kb = 1
            else:
                if x > 10 and x < 100:
                    if x<n:
                        n=x
                else:
                    print("podana wartosc nie jest 2 cyfrowa dodatnia")
        except ValueError:
            print("podana watosc nie prawidlowa")
    print("najmniejsza liczba to:",n)
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break
