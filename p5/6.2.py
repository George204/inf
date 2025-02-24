plik = open("text.txt","r")
dane = plik.read()
print(dane)
plik.close()

print(str(len(dane.split("\n"))) + " wierszy")

slow = []
for i in dane.split("\n"):
    for j in i.split(" "):
        slow.append(j)
print(f"{len(slow)} słów")

a = 0
for i in dane:
    if i.lower() == "a":
        a += 1
print(f"a pojawia sie {a} razy")
