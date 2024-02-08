n = int(input("Ile liczb chcesz wpisac? "))
suma = 0
for i in range(n):
    x = int(input(f"Podaj liczbe {i+1}: "))
    suma += x
print(f"srednia wynosi {suma/n:.2f}")