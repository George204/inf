plik = open("dane.txt","r")
dane = plik.read()
plik.close()
__import__('pprint').pprint(dane)

dane = dane.split("\n")[:-1]
liczby = []
for i in dane:
    liczby.append(int(i))
liczby = sorted(liczby)
__import__('pprint').pprint(liczby)

sre = sum(liczby)/len(liczby) 
print(sre)

prime = []
def isprime(n):
    kn = int(n/2+1)
    for i in range(2,kn):
        if n%i == 0:
            return(False)
    return(True)
plik = open("wyniki1.txt","w")
for i in liczby:
    if isprime(i):
        plik.write(str(i)+"\n")
plik.close()

