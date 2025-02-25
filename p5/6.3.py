text = input("podaj text:")
text = text.replace(" ","")

def pali(n):
    if n != n[::-1]:
        return "text nie jest palindromem"
    return "text jest palindromem"
print(pali(text))
