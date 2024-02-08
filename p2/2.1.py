import os
import msvcrt as m
pln = 1
eur = 4
usd = 3
chf = 5
os.system("cls")
bal = int(input("Podaj kwote pieniedzy: "))
print("1.PLN\n2.EUR\n3.USD\n4.CHF")
wal = m.getch()

match wal:
    case b'1':
        val = pln
    case b'2':
        val = eur
    case b'3':
        val = usd
    case b'4':
        val = chf    
        
print("\x1b[2;0Hwatosc w PLN",bal*val/pln)
print("watosc w EUR",bal*val/eur)
print("watosc w USD",bal*val/usd)
print("watosc w CHF",bal*val/chf)