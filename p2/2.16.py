import msvcrt as m
k = b't'
while True:
    n,sum = 0,0 
    while True:
        try:
            n = int(input("podaj a:"))
            if n>0:
                break
            else:
                print("liczba niedodatnia")
        except ValueError:
            print("podaj int")
    while(n>0):
        sum += n%10
        n //= 10
    print(f"suma cyfr liczby to:{sum}")
    print("czy chcesz powtorzyc program (T/N)")
    k = m.getch().lower()
    if k != b't':
        break
