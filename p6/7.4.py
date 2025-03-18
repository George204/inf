from pprint import pprint
def suma(s):
    n=0
    for i in s:
        n = n + ord(i)
    return n

def isprime(n):
    if n%1 != 0:
        return False
    kn = int(n / 2 + 1)
    for i in range(2, kn):
        if n % i == 0:
            return False
    return True

def rosn(s):
    last = 1
    for i in s:
        if ord(i)<=last:
            return False
        last = ord(i)
    return True

def inq(t):
    t[0] = t[0] + 1

plik = open("NAPIS.TXT","r").read()
napisy = plik.split("\n")
#a
pierwsze = [0]
[inq(pierwsze) for i in napisy if isprime(suma(i)) ]
print(f'{pierwsze[0]} napisów pierwszych')
#b
ros = []
[ros.append(i) for i in napisy if rosn(i)]
print(f"napisy rosnące: {ros}\n")
#c
[napisy.remove(i) for i in set(napisy)]
pprint(set(napisy))
