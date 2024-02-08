import math as m
bok = 0
kat = 0
pole = 0
print(m.pi)
bok = int(input("Podaj bok : "))
kat = int(input("1.kwadrat\n2.pieciokat\n3.szeskat\n4.osimikat\n"))
kat += 3
match kat:
    case 4:
        print("pole=",bok**2)
    case 5:
        print("pole=",(bok*bok*kat)/(4*m.tan(m.pi/kat)))
    case 6:
        print("pole=",(bok*bok*kat)/(4*m.tan(m.pi/kat)))
    case 7:
        print("pole=",(bok*bok*kat)/(4*m.tan(m.pi/kat)))