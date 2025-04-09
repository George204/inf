numbers = {"0":0,"1":1,"2":2,"3":3,"4":4,"5":5,"6":6,"7":7,"8":8,"9":9,"A":10,"B":11,"C":12,"D":13,"E":14,"F":15,}
p = int(input("podaj podstawe:"))
n = str(input("podaj liczbe:")).upper()
def wartość(p,n):
    pot = 0
    suma = 0
    for i in reversed(n):
        suma = suma + numbers[i]*pow(p,pot)
        pot = pot + 1
    return suma
print(wartość(p,n))
