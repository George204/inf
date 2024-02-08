n = int(input("podaj liczbe n:"))
wynik = 0
for i in range(100,1000):
    if (i%10+int(i/10)%10+int(i/100)%10)==n:
        wynik += 1
        print(i)
print(f"ilosc liczb:{wynik}")