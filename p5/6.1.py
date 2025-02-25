plik = open("dane.txt","r")
dane = plik.read()
plik.close()

dane = dane.split("\n")[:-1]
liczby = []
for i in dane:
    liczby.append(int(i))
print(liczby)
print(f"najmniejsza to {min(liczby)} na {liczby.index(min(liczby))} miejscu\nnajwiększa to {max(liczby)} na {liczby.index(max(liczby))} miejscu")
sre = sum(liczby)/len(liczby) 
print(f"średnia to {sre}")

liczby = sorted(liczby)
__import__('pprint').pprint(liczby)
prime = []
def isprime(n):
    kn = int(n/2+1)
    for i in range(2,kn):
        if n%i == 0:
            return(False)
    return(True)
plik = open("wyniki1.txt","w")

for i in set(liczby):
    if isprime(i):
        plik.write(str(i)+"\n")
plik.close()

dane = open("wyniki1.txt","r").read().split("\n")[:-1]
plik2 = open("wyniki2.txt","w")
for i in dane:
    plik2.write(i)
    sum = 0
    for j in i:
        sum += int(j)
    if sum%2 == 0:
        plik2.write(" BINGO")
    plik2.write("\n")
