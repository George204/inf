from math import sqrt
def isprime(n):
    if n%1 != 0:
        return False
    kn = int(n / 2 + 1)
    for i in range(2, kn):
        if n % i == 0:
            return (False)
    return (True)


text = open("liczby.txt", "r").read()
wynik = open("wyniki.txt", "w")
[wynik.write(f"{n}\n") for n in text.split("\n")[:-1] if isprime(sqrt(int(n)))]
