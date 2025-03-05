#odpowiedzi pod punktu a) motor -> mtroo arka -> akra
#odpowiedz pod punktu b)k
s = input("podaj słowo")
w =''
odd = False
for i in s:
    if odd:
        w = w[:-1] + i + w[-1]
        odd = False
    else:
        w = w+i
        odd = True
print(w)

