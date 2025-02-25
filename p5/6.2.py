plik = open("text.txt","r")
dane = plik.read()
print(dane)
plik.close()

wiersz = []
[wiersz.append(w) for w in dane.split("\n") if w != ""]
print(str(len(wiersz)) + " wierszy")

slow = []
for i in dane.split("\n"):
    for j in i.split(" "):
        if j != "":
            slow.append(j)
print(f"{len(slow)} słów")

a = []
[a.append(i) for i in dane if i.lower() == "a"]
print(f"a pojawia sie {len(a)} razy")
