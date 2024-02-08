import msvcrt as m
k = b'n'
while True:
    a,b = 0,0
    while True:
        try:
            a = int(input("podaj a:"))
            if -15<=a and a<=15:
                break
            else:
                print("podaj liczba nie jest w zarkresie")
        except ValueError:
            print("podaj int")
    while True:
        try:
            b = int(input("podaj b:"))
            if -15<=b and b<=15:
                if b<a:
                    print("b musi byc mniejsze od a")
                else:
                    break
            else:
                print("podaj liczba nie jest w zarkresie")
        except ValueError:
            print("podaj int")
    l1,l3 = a,a
    print("    ",end="")
    while l3 <=b:
        print(f"{l3:>4}",end="")
        l3 += 1
    print("")
    while l1 <=b:
        print(f"{l1:<4}",end="")
        l2 = a
        while l2 <=b:
            print(f"{l1*l2:>4}",end="")
            l2 += 1
        print("")
        l1 += 1
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break