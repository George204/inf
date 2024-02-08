a = int(input("Podaj A: "))
b = int(input("Podaj B: "))
c = int(input("Podaj C: ")) 
for i in range(a,b):
    if i%c == 0:
        print(i,end=",")